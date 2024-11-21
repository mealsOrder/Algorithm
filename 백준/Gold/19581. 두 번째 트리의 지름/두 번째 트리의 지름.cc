#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
const int MX = 100001;
int N;
vector<pair<int,int>>v[MX];
vector<int>ans;
int mxDist;
int mxNode;
bool vis[MX];

void DFS(int x,int d,int e){

    if(vis[x])return;
    vis[x] = true;

    if(mxDist < d && x != e){
        mxDist = d;
        mxNode = x;
    }

    for(int i=0;i<v[x].size();i++){
        int nxNode = v[x][i].first;
        int nxDist = v[x][i].second;

        if(!vis[nxNode]) DFS(nxNode, d + nxDist,e);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin >> N;

    for(int i=0;i<N-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    mxDist = 0;
    DFS(1,0,0);
    int st = mxNode;    

    fill(vis,vis+N+1,0);
    mxDist = 0;
    DFS(st,0,0);
    int en = mxNode;

    fill(vis,vis+N+1,0);
    mxDist = 0;
    DFS(st,0,en);
    ans.push_back(mxDist);

    fill(vis,vis+N+1,0);
    mxDist = 0;
    DFS(en,0,st);
    ans.push_back(mxDist);

    if(ans[0] >= ans[1]) cout << ans[0];
    else cout << ans[1];

    return 0;
}
