#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    //計算 原點到(x,y)的長度
    double checkLen = sqrt(x * x + y * y);
    // 題目: 半徑r = 100 ，原點到(x,y)的長度 <= r -> inside
    if (checkLen <= 100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
    return 0;
}