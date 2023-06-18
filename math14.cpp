#include<iostream>

using namespace std;
int main(){
    int second ;
    cin >> second;
    int days = second / 60 / 60 / 24;
    //扣掉已算為日的秒數
    second -= days * 60 * 60 * 24;
    int hours = second / 60 / 60;
    //扣掉已算為時的秒數
    second -= hours * 60 * 60;
    int minute = second / 60;
    //扣掉已算為分的秒數
    second -= minute * 60;
    cout << days <<" days"<< endl
         << hours <<" hours"<< endl
         << minute <<" minutes"<< endl
         << second <<" seconds"<< endl;
    return 0;
}
