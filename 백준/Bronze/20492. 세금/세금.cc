#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;

    cin >> N;

    cout <<   N * 78 / 100 << ' ' << N - (N*20 / 100) * 22 / 100;

    return 0;
}