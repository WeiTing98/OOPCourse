#include<iostream>
using namespace std;
int main(){
    int n ,m , total = 0;
    cin >> n >> m;
    for(int i = n ; i <=m ; i++)
        total += i;
    cout<< total << endl;
    return 0;
}