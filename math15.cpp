#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    bool inside = true;
    if (x > 100 || x < 0)
        inside = false;
    if (y > 100 || y < 0)
        inside = false;
    if (inside)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
    return 0;
}
