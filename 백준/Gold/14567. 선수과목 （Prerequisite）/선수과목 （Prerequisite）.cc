#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MX = 10001;

int N,M;
int in[MX];
int ans[MX];
vector<int>adj[MX];
queue<int>q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    
    while(M--){
        int a,b;
        cin >> a>>b;
        adj[a].push_back(b);
        in[b]++;
    }

    for(int i=1;i<=N;i++){
        if(in[i] == 0)q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i=0;i<adj[cur].size();i++){
            int nx = adj[cur][i];
            in[nx]--;
            if(in[nx] == 0){
                q.push(nx);
                if(ans[nx] < ans[cur]+1) ans[nx] = ans[cur]+1;
            }
        }
    }
    for(int i=1;i<=N;i++){
        cout << ans[i]+1 << " ";
    }
    return 0;
}