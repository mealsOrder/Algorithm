#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>
using namespace std;

const int MX = 502;
const int INF = 1e9;

vector<tuple<int,int,int>> edges;
long long d[MX]; // 거리 값
int N,M;

bool bellman_ford(int s){
    d[s] = 0;

    for(int i=1;i<=N;i++){
        for(int j=0;j<M;j++){
            int from, to, cost;
            tie(from,to,cost) = edges[j];

            if( d[from] == INF)continue;

            if( d[to] > d[from] + cost){
                d[to] = d[from] + cost;

                if( i == N) return true;
            }
        }
    }

    return false;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int a,b,c;
        cin >> a >> b >> c;
        edges.push_back({a,b,c});
    }

    fill_n(d,MX,INF);

    bool cycle = bellman_ford(1);

    if(cycle){
        cout << "-1\n";
        return 0;
    }

    for(int i=2;i<=N;i++){
        if(d[i] == INF) cout << "-1\n";
        else cout << d[i] << '\n';
    }

	return 0;
}