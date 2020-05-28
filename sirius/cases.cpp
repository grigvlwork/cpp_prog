#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector <string> pupils;
    string first_name, last_name, group, birth_date, record;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> last_name >> first_name >> group >> birth_date;
        record = group + " " + last_name + " " + first_name + " " + birth_date;
        pupils.push_back(record);
    }
    sort(pupils.begin(), pupils.end());
    for(int i=0; i<n; i++){
        cout << pupils[i] << endl;
    }
    return 0;
}
