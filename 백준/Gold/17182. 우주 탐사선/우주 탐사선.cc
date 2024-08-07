#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int MX = 11;
const int INF = 987987987;
int N,S,ans = INF;;
int map[MX][MX];
bool vis[MX];
void func(){
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(map[i][j] > map[i][k] +map[k][j] ){
                    map[i][j] = map[i][k] +map[k][j];
                }
            }
        }
    }
}

void back(int cur,int sum,int x){
    if(x==N){
        if(ans>sum) ans = sum;
        return;
    }
    for(int i=0;i<N;i++){
        if(!vis[i]){
            vis[i]=true;
            back(i,sum+map[cur][i],x+1);
            vis[i]=false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> N >> S;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> map[i][j];
        }
    }

    func();
    vis[S] = true;
    back(S,0,1);
    cout << ans << '\n';
    return 0;
}