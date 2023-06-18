#include<iostream>
using namespace std;
const int INF = 100000;

int main(){
    int k;
    cin >> k;
    int graph[k+1][k+1];
    for(int i = 0; i < k + 1; i++){
        for(int j = 0; j < k + 1; j++){
            cin >> graph[i][j];
        }    
    }
    // prim
    int total = 0;
    int key[k + 1];
    bool mst[k + 1];
    for(int i = 0 ; i < k+1 ; i++){
        key[i] = INF;
        mst[i] = false;
    }
    //root
    key[0] = 0;
    for(int i = 0;i < k; i++){
        int curr , minKey = INF;
        for(int j = 0; j < k + 1 ; j++){
            if(!mst[j] && key[j] < minKey){
                curr = j;
                minKey = key[j];
            }
        }
        mst[curr] = true;
        for(int j = 0; j < k + 1 ; j++){
            if(graph[curr][j] && !mst[j] && graph[curr][j] < key[j]){
                key[j] = graph[curr][j];
            }
        }
    }
    for(const auto& e: key){
        total += e;
    }
    cout<< total<<endl;
    return 0;
}