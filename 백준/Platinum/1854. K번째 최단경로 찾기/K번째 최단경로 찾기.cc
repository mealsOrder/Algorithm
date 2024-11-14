#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
const int MX = 1001;
const int INF = 1e9;
vector<pair<int,int>>v[MX];
priority_queue<int,vector<int>,less<int>> dist[MX];
priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
int N,M,K;
int s = 1;
void dijkstra(){
    pq.push({0,s});
    dist[s].push(0);

    while(!pq.empty()){
        int curCost = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        for(int i=0;i<v[curNode].size();i++){
            int nxCost = v[curNode][i].first;
            int nxNode = v[curNode][i].second;

            if(dist[nxNode].size() < K){
                dist[nxNode].push(curCost + nxCost);
                pq.push({curCost + nxCost,nxNode});
            }
            else{
                if(dist[nxNode].top() > curCost + nxCost){
                    dist[nxNode].pop();
                    dist[nxNode].push(curCost + nxCost);
                    pq.push({curCost + nxCost,nxNode});
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);

    cin >> N >> M >> K;

    for(int i=0;i<M;i++){
        int a,b,c;
        cin >> a >> b >> c;

        v[a].push_back({c,b});

    }

    dijkstra();
    
    for(int i=1;i<=N;i++){
        if(dist[i].size() < K) cout << -1 << '\n';
        else{
            cout << dist[i].top() << '\n';
        }
    }

    return 0;
}