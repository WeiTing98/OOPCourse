#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ten = 0, five = 0, one = 0;

    if (n / 10 > 0){
        ten = n / 10;
        n %= 10;
    }
    if (n / 5 > 0){
        five = n / 5;
        n %= 5;
    }
    if(n / 1 > 0){
        one = n;
    }
    cout << "NT10=" << ten << endl
         << "NT5=" << five << endl
         << "NT1=" << one << endl;
    return 0;
}
