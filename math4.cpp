#include<iostream>
using namespace std;
int main(){
  int n1, n2;
  cin >> n1 >> n2;
  int mod = n1 % n2, divide= n1 / n2;
  if (mod < 0) {
    mod = mod+n2;
    divide -= 1;
  }
  cout << n1 << "+" << n2 << "=" << n1 + n2 << endl
       << n1 << "*" << n2 << "=" << n1 * n2 << endl
       << n1 << "-" << n2 << "=" << n1 - n2 << endl
       << n1 << "/" << n2 << "=" << divide << "..." << mod << endl;
  return 0;
}
