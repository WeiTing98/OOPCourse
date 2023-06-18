#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cin >> n;
    n = round(n * n * 10) / 10;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << n << endl;
    return 0;
}