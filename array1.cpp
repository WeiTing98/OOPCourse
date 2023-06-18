#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[100]={};
    int a;
    int c = 0;
    //輸入陣列
    while (cin >> a)
    {
        arr[c] = a;
        c++;       
    }
    //反向輸出
    for (int i = 1; i <= c; i++)
    {
        cout<<arr[c-i];
        if(i != c )cout<<" ";
    }
    cout<<endl;    

    return 0;
}