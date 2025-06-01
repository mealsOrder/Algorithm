#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MX = 101;
int N, M;
bool light[MX][MX]; // 불이 켜졌는가
bool vis[MX][MX];   // 방문했는가
vector<pair<int, int>>adj[MX][MX]; // 스위치 정보
int dx[4] ={0, 0, 1, -1};
int dy[4] ={1, -1, 0, 0};

// 유효한 좌표인지 확인
bool OOB(int x, int y){
    return x < 1 || x > N || y < 1 || y > N;
}

// BFS 함수
void BFS(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        int curX = cur.first;
        int curY = cur.second;

        // 현재 방에서 스위치를 눌러 불을 켤 수 있는 방 처리
        for(int i = 0; i <adj[curX][curY].size(); i++){
            int a = adj[curX][curY][i].first;
            int b = adj[curX][curY][i].second;

            if(!light[a][b]){
                light[a][b] = true;

                // 불을 켠 방이 인접한 방문된 방과 맞닿아 있다면 큐에 추가
                for(int dir = 0; dir < 4; dir++){
                    int nx = a + dx[dir];
                    int ny = b + dy[dir];
                    if(!OOB(nx, ny) && vis[nx][ny]){
                        vis[a][b] = true;
                        q.push({a, b});
                        break;
                    }
                }
            }
        }

        // 인접한 4방향으로 이동
        for(int dir = 0; dir < 4; dir++){
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];

            if(OOB(nx, ny)) continue;
            if(vis[nx][ny]) continue;
            if(!light[nx][ny]) continue;

            vis[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        adj[x][y].push_back({a, b});
    }

    light[1][1] = true;
    BFS(1, 1);

    int ans = 0;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            if(light[i][j]) ans++;

    cout << ans << '\n';
    return 0;
}