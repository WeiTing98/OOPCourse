#include<iostream>
using namespace std;
int main(){
  double base, height;
  cin >> base >> height;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  cout << base *height / 2<< endl;
  return 0;
}
