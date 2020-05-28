#include <iostream>
#include <vector>

using namespace std;

struct tick_data{
    int ask;
    int bid;
    int local_min_ask;
    int index_min_ask;
};

int main()
{
    int n, x, min_ask, ind_min, max_bid, max_profit;
    int ind_ask_profit, ind_bid_profit;
    cin >> n >> x;
    vector <tick_data> ticks;
    tick_data new_tick;
    min_ask = 9999;
    ind_min = -1;
    for (int i=0; i<n; i++){
        cin >> new_tick.ask;
        if (new_tick.ask < min_ask){
            new_tick.local_min_ask = new_tick.ask;
            new_tick.index_min_ask = i;
            min_ask = new_tick.ask;
            ind_min = i;
        }
        else{
            new_tick.local_min_ask = min_ask;
            new_tick.index_min_ask = ind_min;
        }
        ticks.push_back(new_tick);
    }
    for(int i=0; i<n; i++){
        cin >> ticks[i].bid;
    }
    max_bid = -1;
    max_profit = -9999999;
    ind_ask_profit = -1;
    ind_bid_profit = -1;
    for(int i = n-1; i > -1; i--){
        if (ticks[i].bid > max_bid) {
            max_bid = ticks[i].bid;
            if ((max_bid - ticks[i].local_min_ask) > max_profit){
                max_profit = max_bid - ticks[i].local_min_ask;
                ind_ask_profit = ticks[i].index_min_ask;
                ind_bid_profit = i;
            }
        }
    }
    if(max_profit > 0){
        int amount = x / ticks[ind_ask_profit].ask;
        cout << ticks[ind_bid_profit].bid * amount << endl;
        cout << ind_ask_profit + 1 << " " << ind_bid_profit + 1;
    }
    else{
        cout << x << endl;
        cout << -1 << " " << -1;
    }
    return 0;
}
