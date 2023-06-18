#include<iostream>

using namespace std;
int main(){
    pair<int,int> start, end;
    cin >> start.first >> start.second;
    cin >> end.first >> end.second;
    int hour = end.first - start.first , minute;
    // 15:10 , 13:50 -> 結束的"分鐘"較小
    if(start.second > end.second){
        hour -= 1;
        minute = end.second + 60 - start.second;
    }
    else minute = end.second - start.second;
    //以分鐘數來表示
    int inMinute = hour * 60 + minute;
    int total = 0;
    int temp;
    // > 4h-> 只算大於4h的部分
    if(inMinute > 240){
        temp = inMinute - 240;
        total += (temp / 30) * 60;
        total += 30 * 4 + 40 * 4;
    }
    // 4h > time > 2h -> 只算大於2h的部分
    else if(inMinute > 120){
        temp = inMinute - 120;
        total += (temp / 30) * 40;
        total += 30 * 4;
    }
    // < 2h
    else{
        total += (inMinute / 30) * 30;
    }
    cout << total << endl;
    
    return 0;
}
