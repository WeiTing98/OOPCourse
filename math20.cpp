#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ;
    cin >> n;
    string hex = "";
    while(n > 0){
        if(n % 16 < 10 ){
            hex = to_string(n % 16) + hex;//加在左邊
        }
        else{
            char hexSymbol = ((n % 16 - 10) + 'A');
            hex = hexSymbol + hex;
        }
        n /= 16;
    }
    cout << hex << endl;
    return 0;
}