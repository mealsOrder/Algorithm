#include <cstdio>
#include <vector>

using namespace std;

const int MAX = 101;

int n,m,cnt=0;
bool visited[MAX];

vector <int> myComputer[MAX];

void DFS(int x){
  
  visited[x] = true;
  //printf("%d ",x); 방문한 노드 출력
  
  for(int i=0;i<myComputer[x].size();i++){
    
    int y = myComputer[x][i];
    
    if(visited[y] == false ){
      DFS(y);
      cnt++;
    }
   
    
  }  
  
}


int main() {
  
  scanf("%d",&n);
  scanf("%d",&m);
  
  for(int i=0;i<m;i++){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    myComputer[a].push_back(b);
    myComputer[b].push_back(a);
    
    
  }
  
  DFS(1);
  
  printf("%d\n",cnt);
  
  return 0;
}