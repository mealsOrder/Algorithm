#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MX = 1001;
int N,M;
int map[MX][MX];
bool vis[MX][MX];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void BFS(int x,int y){
    queue<pair<int,int>>q;
    vector<pair<int,int>>v;
    int cnt = 1;
    vis[x][y]=true;
    q.push({x,y});

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = curX+dx[i];
            int ny = curY+dy[i];
            if(nx<0||nx>=N||ny<0||ny>=M)continue;
            if(!vis[nx][ny] && map[nx][ny] == 0){
                cnt++;
                vis[nx][ny]=true;
                q.push({nx,ny});
            }
            else if(!vis[nx][ny] && map[nx][ny] != 0){
                vis[nx][ny]=true;
                v.push_back({nx,ny});
            }
        }
        
    }
    for(int i=0;i<v.size();i++){
        map[v[i].first][v[i].second] += cnt;
        vis[v[i].first][v[i].second] = false;
    }

}

int main(){
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%1d",&map[i][j]);
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] == 0 && !vis[i][j])BFS(i,j);
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << map[i][j]%10;
        }
        cout << '\n';
    }

    return 0;
}