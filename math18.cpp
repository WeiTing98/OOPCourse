#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int bin[8] = {0};
    if(n > 0) {
        for(int i = 7; i >= 0 ;i-- ){
            bin[i] = n % 2;
            n /= 2;
        }
    }
    else{
        for(int i = 7; i >= 0 ;i-- ){
            int mask = 1 << (7-i);//位元shift
            bin[i] = n & mask ? 1 : 0;
        }
        
    }
    
    for(auto e: bin)
        cout<<e;
    cout << endl;
    return 0;
}