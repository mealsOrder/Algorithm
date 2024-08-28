#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MX = 100001;
long long arr[MX];
long long dist[MX];
long long ans;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0;i<N-1;i++){
        cin >> dist[i];
    }

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    ans = arr[0] * dist[0];

    for(int i=1;i<N;i++){
        ans = ans+min(arr[i]*dist[i],arr[i-1]*dist[i]);
    }

    cout << ans;
    return 0;
}