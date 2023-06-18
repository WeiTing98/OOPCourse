#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool prime(int num){
    for(int i = 2; i < num ; i++){
        if(num % i == 0)return false;
    }
    return true;
}
int findMaxPrime(string num){ //最大6位數
    vector<int> nums;
    int length = 2;
    for(int i = 0; i < num.size(); i++){ 
        nums.push_back(stoi(num.substr(i,1)));//12345，拆成 1,2,3,4,5    
    }
    for(int i = 2; i <= num.length(); i++){
        for(int j = 0; j < num.length() ;j++){
            if(j > (num.size() - i)){
                continue;
        }
        // cout<< num.substr(j, length) <<endl;
        nums.push_back(stoi(num.substr(j, i))); // 12345 -> 12 23 34 45 // 1234 -> 12 23 34
        }
    }
    
    int maxPrime = -1;
    for(const auto& e : nums){
        // cout << e <<endl;
        if(prime(e) && maxPrime < e){
            maxPrime = e;
        }
    }
    
    return maxPrime;
}

int main(){
    string input;
    cin >> input;
    int maxPrime = findMaxPrime(input);
    if(maxPrime == -1)cout << "No prime found" << endl;
    else cout << maxPrime << endl;
    return 0;
}