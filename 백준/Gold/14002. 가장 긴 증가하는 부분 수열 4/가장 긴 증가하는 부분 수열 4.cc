#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 1001;

int dp[MAX];
int arr[MAX];

vector <int> v;
vector <int> inc;
int large;
int main() {
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	
	
	// 최장 증가  부분 수열 구하기 
	for(int i=1;i<=n;i++){
		dp[i] = 1;
		for(int j =1;j<=i;j++){
			if(arr[i] > arr[j] && dp[i] < dp[j]+1){
				
				dp[i] = dp[j] + 1;
				
			}
		}
		
		// large=max(large,dp[i]); 
		
		if(large < dp[i]){
			large =	dp[i];
		}
		
	}
	
	// 길이 출력 
	cout << large << '\n';
	
	// 증가수열 배열에 푸시  
	for(int i=n;i>0;i--){
		if(dp[i] == large){
			inc.push_back(arr[i]);
			large--;
		}
		
	}
	
	
	// 증가 수열 출력 (뒤에서 부터...) 
	for(int i=inc.size()-1;i>=0;i--){
		cout << inc[i] << " ";
	}
	return 0;
}