#include<iostream>
using namespace std;
int main(){
    int time , salary;
    cin >> time >> salary;
    double total = 0;
    if(time > 120){
        double temp = (time - 120) * salary * 1.66;
        total = temp + 60 * salary + 60 * salary * 1.33;
    }
    else if(time > 60){
        double temp = (time - 60) * salary * 1.33;
        total = temp + 60 * salary ;
    }
    else
        total = time *salary;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << total <<endl;
    return 0;
}