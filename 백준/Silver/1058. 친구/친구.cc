#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
#include<climits>
#include<deque>
using namespace std;
const int MX = 51;
const int INF = INT_MAX;
string map[MX];
int path[MX][MX];
int N;
/**
 * 플로이드 워셜 풀이
 */
void init(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            path[i][j] = INF; 
        }
    }
}

void floydWarshall(){
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(path[i][k] != INF && path[k][j] != INF && i!=j){
                    path[i][j] = min(path[i][j], path[i][k] + path[k][j]);
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> map[i];
    }
    init();
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(map[i][j] == 'Y')path[i][j] = 1;
        }
    }

    int mx = 0;
    floydWarshall();
    for(int i=0;i<N;i++){
        int cnt = 0;
        for(int j=0;j<N;j++){
            if(path[i][j] <=2) cnt++;
        }
        mx = max(mx,cnt);
    }
    cout << mx;

    return 0;
}