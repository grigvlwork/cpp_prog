#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

using namespace std;

struct passenger
{
    int sit, stand, in, out;
    int wt_up, wt_dn, state;
};

bool pass_sort(passenger& p1, passenger& p2) {
    return p1.in < p2.in;
}

bool tram_sort(passenger& p1, passenger& p2) {
    // сортируем по убыванию сидячего веса, при равенстве по возрастанию дальности расстояния
    return p1.sit == p2.sit ? p1.out < p2.out : p1.sit > p2.sit;
}


int main() {
    int n, m, p, i, free_sit, satisfaction;
    //ifstream f("input.txt");
    cin >> n >> m >> p;
    // f >> n >> m >> p;
    vector<passenger> pas;
    vector<passenger> tram;
    vector<passenger>::iterator it_pas;
    vector<passenger>::iterator it_tram_pas;
    passenger curr_pass;
    for (i = 0; i < n; i++)
    {
        cin >> curr_pass.sit >> curr_pass.stand >> curr_pass.in >> curr_pass.out;
        // f >> curr_pass.sit >> curr_pass.stand >> curr_pass.in >> curr_pass.out;
        curr_pass.wt_up = curr_pass.stand * (curr_pass.out - curr_pass.in);
        curr_pass.wt_dn = curr_pass.sit * (curr_pass.out - curr_pass.in);
        curr_pass.state = 0;
        pas.push_back(curr_pass);
    }
    //f.close();
    sort(pas.begin(), pas.end(), pass_sort);
    free_sit = m;
    satisfaction = 0;
    it_pas = pas.begin();
    // проходим по всем остановкам
    for (i = 1; i <= p; ++i) {
        // считаем удовлетворенность пассажиров
        // выходят пассажиры, увеличиваем свободные сидячие места
        for (vector<passenger>::iterator it = tram.begin();
                it != tram.end();) {
            satisfaction += (*it).state == 1 ? (*it).sit : (*it).stand;
            if ((*it).out == i) {
                if ((*it).state == 1) ++free_sit;
                tram.erase(it);
            }
            else ++it;
        }
        // ищем пассажиров, которым нужно войти на этой остановке
        while (((*it_pas).in < i) && ((it_pas != pas.end()))) ++it_pas;
        // входят пассажиры, пока не садятся
        while ((*it_pas).in == i) {
            tram.push_back((*it_pas));
            ++it_pas;
        }
        // сидячих пассажиров сортируем по убыванию сидячего веса
        sort(tram.begin(), tram.end(), tram_sort);
        // Пытаемся посадить сидячих на свободные места, если есть места
        it_tram_pas = tram.begin();
        while ((free_sit > 0) && (it_tram_pas != tram.end()))
        {
            if(((*it_tram_pas).sit > (*it_tram_pas).stand) && ((*it_tram_pas).state == 0)){
                (*it_tram_pas).state = 1;
                --free_sit;
            }
            ++it_tram_pas;
        }
        // проверяем можно ли поднять кого-то с меньшим сидячим весом
        for (vector<passenger>::iterator it_stand = tram.begin(); it_stand != tram.end() - 1; ++it_stand){
            if(((*it_stand).state == 0) && ((*it_stand).sit > (*it_stand).stand)){
                for (vector<passenger>::iterator it_sit = tram.end() - 1; it_sit != it_stand; --it_sit){
                    if((*it_sit).state == 1){
                        (*it_sit).state = 0;
                        (*it_stand).state = 1;
                        break;
                    }
                }
            }
        }
    }
    cout << satisfaction;
    return 0;
}
