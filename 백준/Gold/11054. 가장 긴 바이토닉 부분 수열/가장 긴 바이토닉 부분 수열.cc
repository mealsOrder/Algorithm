#include<iostream>  
#include<vector>    
#include<algorithm> 
#include<queue>     
using namespace std;

const int MX = 1001;
int dp[MX];
int dp_r[MX];
int arr[MX];

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i];
        dp[i] = dp_r[i] = 1;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],dp[j]+1) ;
            }
        }
    }

    for(int i=N-1;i>=0;i--){
        for(int j=N-1;j>i;j--){
            if(arr[i] > arr[j]){
                dp_r[i] = max(dp_r[i],dp_r[j]+1);
            }
        }
    }
    int ans = 0;
    for(int i=0;i<N;i++){
        ans = max(ans , dp[i]+dp_r[i]);
    }
    cout << ans - 1 << '\n';
    return 0;
}