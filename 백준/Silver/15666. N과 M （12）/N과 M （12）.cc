#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
const int MX = 30;
int arr[MX];
int ans[MX];
bool vis[MX];
int N,M;
int pre;
void back(int x){
    if(x==M){
        for(int i=0;i<M;i++){
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }
    else{
        int last = 0;
        for(int i=1;i<=N;i++){
            pre = ans[x-1]; // 이게 맞나?
            if(pre <= arr[i] && last != arr[i] ){
                last = ans[x] = arr[i];
                back(x+1);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }
    sort(arr,arr+N+1);
    back(0);
    return 0;
}