#include<iostream>
using namespace std;
int main(){
    int a = 0, in;
    for (int i = 0; i < 6; i++)
    {
        // 輸入元素
        cin>>in;
        // 計算立方並加總
        a += in*in*in;
    }
    cout<< a <<endl;
    return 0;
}