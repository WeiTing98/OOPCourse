#include <iostream>
#include <sstream>
#include <string>
using namespace std;
// 用更相減損法計算最大公因數
int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    return num1;
}

int main(){
    // n組案例
    int n;
    cin >> n;
    for (int index = 0; index < n; index++){
        // 輸入兩個分數，因為有/符號所以用string
        string fraction1, fraction2;
        cin >> fraction1 >> fraction2;
        bool check1 = false, check2 = false;
        //偵測格式
        for(auto e : fraction1){
            if(e == '/')check1 = true;
        }
        for(auto e : fraction2){
            if(e == '/')check2 = true;
        }
        if (!check1 || !check2){
            cout << "Input format error." << endl;
            continue;
        }
        // 分數1: f1[0]:分母 f1[1]:分子
        int f1[2], f2[2];
        string temp;
        // 字串分割
        stringstream ss1(fraction1), ss2(fraction2);
        int i = 0;
        while (getline(ss1, temp, '/')){
            f1[i] = stoi(temp);
            i++;
        }
        i = 0;
        while (getline(ss2, temp, '/')){
            f2[i] = stoi(temp);
            i++;
        }
        //判斷分母是否為0
        if(f1[1] == 0 || f2[1] == 0){
            cout << "Input value error." << endl;
            continue;
        }
        //compute
        int denominator = f1[1] * f2[1];
        //分子分母互乘並加總->加總分數
        int numerator = f1[0] * f2[1] + f1[1] *f2[0];
        //分子相乘
        int multiplication = f1[0] * f2[0];
        //約分用的最大公因數(加法版)
        int reduction = gcd(denominator, numerator);
        //約分用的最大公因數(乘法版)
        int reduction2 = gcd(denominator, multiplication);
        //印出加法結果
        //判斷真分數
        if(numerator < denominator){ //真分數
            cout << numerator / reduction <<"/" << denominator / reduction;
        }
        else{
            cout << numerator / denominator << " " << (numerator % denominator) / reduction << "/" << denominator / reduction;
        }
        cout << endl;
        // 印出乘法結果
        if(multiplication < denominator) { //真分數
            cout << multiplication / reduction2 << "/" <<denominator/reduction2;
        }
        else{
            cout << multiplication / denominator << " " << (multiplication % denominator) / reduction2 << "/" << denominator / reduction2;
        }
        cout << endl;
    }
    return 0;
}