#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if(n > 31) cout << "Value of more than 31" <<endl;
    else cout << (int)pow(2, n) << endl;
    return 0;
}
