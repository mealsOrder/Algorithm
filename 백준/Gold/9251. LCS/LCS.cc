#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int M = 1001;

int dp[M][M];


int main(){
	string a,b;
	
	cin >> a >> b;
	
	int aa = a.length();
	int bb = b.length();
	
	for(int i=1;i<=aa;i++){
		for(int j=1;j<=bb;j++){
			if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	cout << dp[aa][bb] << endl;
    return 0;
}