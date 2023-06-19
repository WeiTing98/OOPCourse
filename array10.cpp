#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

int main(){
    vector<pair<double,double>> discount(4); // <1x, >1x
    double rate = 0.9;
    for(auto& e: discount){
        e.first=rate;
        e.second=rate-0.1;
        rate -= 0.1;
    }
    string input, temp;
    //輸入並分割字串
    stringstream ss;
    cin >> input;
    int ratePerMonth, time;
    ss << input;
    getline(ss , temp, ',');
    ratePerMonth = stoi(temp);
    getline(ss , temp, ',');
    time = stoi(temp);
    double money;
    //計算通話費
    if(ratePerMonth == 186){
        money = (time * 0.09);
        //倍數小於1
        if(money / ratePerMonth <= 1 && money > ratePerMonth){
            money *= discount[0].first;
        }
        //倍數大於1
        else if (money / ratePerMonth > 1){
            money *= discount[0].second;
        }
        //沒超過月租
        else money = ratePerMonth;
    }
    else if (ratePerMonth == 386)
    {
        money = (time * 0.08);
        if(money / ratePerMonth <= 1 && money > ratePerMonth){
            money = round(money);
            money *= discount[1].first;
        }
        else if (money / ratePerMonth > 1){
            money = round(money);
            money *= discount[1].second;
        }
        else money = ratePerMonth;
    }
    else if (ratePerMonth == 586)
    {
        money = (time * 0.07);
        if(money / ratePerMonth <= 1 && money > ratePerMonth){
            money = round(money);
            money *= discount[2].first;
        }
        else if (money / ratePerMonth > 1){
            money = round(money);
            money *= discount[2].second;
        }
        else money = ratePerMonth;
    }
    else if (ratePerMonth == 986)
    {
        money = (time * 0.06);
        if(money / ratePerMonth <= 1 && money > ratePerMonth){
            money = round(money);
            money *= discount[3].first;
        }
        else if (money / ratePerMonth > 1){
            money = round(money);
            money *= discount[3].second;
        }
        else money = ratePerMonth;
    }
    cout << round(money) << endl;
    return 0;
}
