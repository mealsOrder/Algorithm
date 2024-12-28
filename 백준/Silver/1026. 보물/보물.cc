#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAX = 101;

int a[MAX];
int b[MAX];
int ans;
bool compare(int x,int y){
	return x>y;
}
int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	int n; 
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	
	sort(a,a+n);
	sort(b,b+n,compare);
	
	for(int i=0;i<n;i++){
		//cout << b[i];
		ans += (a[i] * b[i]);
	}
	cout << ans;
	return 0;
}