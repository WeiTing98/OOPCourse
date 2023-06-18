#include<iostream>
using namespace std;
int main(){
    int ans[6];
    // 輸入陣列
    for (int i = 5; i >= 0; i--)
    {
        cin>>ans[i];
    }
    // 反向輸出
    for (int i = 0; i < 6; i++)
    {
        cout<<ans[i];
        if(i!=5)cout<<" ";
    }
    cout<<"\n";
    
    return 0;
}