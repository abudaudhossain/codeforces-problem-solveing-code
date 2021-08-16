#include<bits/stdc++.h>

using namespace std;

int main(){
    int buy_share, sell_shares, hold_bouries, buyShare, sellPrice, a_price, hold_b;
    cin >> buy_share >> sell_shares >>hold_bouries;
    int buy_share_price[buy_share], sell_shares_price[sell_shares];

    for (int i = 0; i < buy_share; i++)
    {
        cin >> buy_share_price[i];
    }
    for(int i =0; i < sell_shares; i++)
        { cin >> sell_shares_price[i];}

    sort(buy_share_price, buy_share_price + buy_share);
    sort(sell_shares_price, sell_shares_price + sell_shares);

    buyShare = hold_bouries / buy_share_price[0];
    sellPrice = buyShare * sell_shares_price[sell_shares -1];

    a_price = hold_bouries % buy_share_price[0];
    hold_b = sellPrice + a_price;
    if(hold_b > hold_bouries)
        cout << hold_b <<endl;
    else
        cout << hold_bouries <<endl;
return 0;
}
