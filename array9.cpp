#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main(){
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    string temp;
    while(getline(ss, temp , ',')){
        arr.push_back(stoi(temp));
    }
    // 由小到大 
    sort(arr.begin(),arr.end());
    int max = 0, min = 0, offset = 1;
    for(int i = 0 ;i < arr.size();i++){
        //小的數值放後面->最大
        max += arr[i] * offset;
        //大的數值放後面->最小
        min += arr[arr.size() - 1 - i] * offset;
        //進位
        offset *= 10;
    }   
    cout << max-min <<endl;
    return 0;
}