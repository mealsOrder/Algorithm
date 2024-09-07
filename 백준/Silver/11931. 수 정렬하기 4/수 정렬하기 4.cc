#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

bool cmp(int a,int b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    vector<int>v;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);

    for(int s:v){
        cout << s << '\n';
    }
    return 0;
}