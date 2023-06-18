#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> bus(24,0);

  for(int i=0;i<n;i++){
    int start,end;
    cin>>start>>end;
    for(int j=start-1 ; j<end-1 ;j++){
      bus[j]++;
    } 
  }
  cout << *max_element(bus.begin(),bus.end())<<endl;
  return 0;
}
