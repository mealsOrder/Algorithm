#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N,M;
vector<int>v;
void back(int x){
    if( v.size() == M){
        for(int num:v) cout << num << " ";
        cout << '\n';
        return ;
    }
    for(int i=x;i<=N;i++){
        v.push_back(i);
        back(i+1);
        v.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N>>M;
    back(1);
    return 0;
}