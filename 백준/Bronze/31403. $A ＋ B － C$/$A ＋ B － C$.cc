#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int A,B,C;
    int res=0;
    string ans = "";
    cin >> A>>B>>C;
    res = A+B-C;
    ans = to_string(A)+to_string(B);
    cout << res << '\n';
    cout << stoi(ans)-C << '\n';
    return 0;
}