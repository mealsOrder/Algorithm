#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string a,b,c;
    int ans;
    cin >> a>>b>>c;
    if(a[0] != 'F' && a[0] != 'B') ans = stoi(a)+3;
    else if(b[0] != 'F' && b[0] != 'B') ans = stoi(b)+2;
    else if(c[0] != 'F' && c[0] != 'B') ans = stoi(c)+1;

    if(ans % 15 == 0)cout << "FizzBuzz";
    else if(ans % 5 == 0)cout << "Buzz";
    else if(ans % 3 == 0)cout << "Fizz";
    else cout << ans;
    return 0;
}