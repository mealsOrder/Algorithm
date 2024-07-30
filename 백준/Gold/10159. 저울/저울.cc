#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MX = 101;
const int INF = 987987987;
int N,M;
int path[MX][MX];
void func(){
    for(int k=1;k<=N;k++)
        for(int i=1;i<=N;i++)
            for(int j=1;j<=N;j++)
                if(path[i][j] > path[i][k] + path[k][j])
                    path[i][j] = path[i][k] + path[k][j];
                
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> N>>M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            path[i][j] = INF;
        }
    }
    while(M--){
        int a, b;
        cin >> a >>b;
        path[a][b] = 1;
    }
    func();
    int ans;
    for(int i=1;i<=N;i++){
        ans = 0;
        for(int j=1;j<=N;j++){
            if(i!=j && path[i][j] == INF && path[j][i] == INF){
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}