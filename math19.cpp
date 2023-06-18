#include<iostream>
using namespace std;
int main(){
    int n ;
    double total = 0;
    cin >> n;
    if(n <= 800){
        total = n * 0.9;
    }
    else if (n < 1500)
    {
        total = n * 0.9 * 0.9;
    }
    else{
        total = n * 0.9 * 0.79;
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << total <<endl;
    return 0;
}