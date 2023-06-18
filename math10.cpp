#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n ;
    cin >> n;
    double f =(n / (5.0/9.0)) + 32;
    f = round(f*10)/10;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f << endl;
    return 0;
}
