#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;

string str;
int ans;
int main(){
    cin >> str;
    stack<char>s;

    for(int i=0;i<str.size();i++){
        if(str[i] == '(')s.push(str[i]);
        else{
            if(str[i-1] == '('){
                s.pop();
                ans+=s.size();
            }
            else{
                s.pop();
                ans++;
            }
        }
    }
    cout << ans;
    
	return 0;
}