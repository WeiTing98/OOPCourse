#include<iostream>

using namespace std;
int main(){
  double up, botton, height;
  cin >> up >> botton >> height;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << "Trapezoid area:" << (up + botton) * height / 2 << endl;
  return 0;
}

