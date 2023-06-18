#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cin >> n;
    double hua = 30*2.54 / 100;
    //每秒接近公尺數
    double diff = 1 - hua;
    double ans = ceil(n / diff);
    cout << ans << endl;
    return 0;
}
