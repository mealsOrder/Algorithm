#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;
const int LARGE = 10001;

int n,k;

int arr[MAX];
int dp[LARGE];

int main(){
	
	cin >> n >> k;
	
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}	
	
	dp[0] = 1;
	
	for(int i=1;i<=n;i++){
		for(int j = arr[i] ;j <= k;j++){
			dp[j] += dp[ j - arr[i] ];
		}
	}
	
	cout << dp[k] << endl;
	
	return 0;
}