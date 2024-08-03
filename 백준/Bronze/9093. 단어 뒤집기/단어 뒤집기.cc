#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int N;
    cin >> N;
    cin.ignore(); // 개행문자 제거!!!
    while(N--){
        string str;
        stack<char>s;
        getline(cin,str);
        str += ' ';
        for(char i:str){
            
            if(i == ' '){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else{
                s.push(i);
            }
        }
        cout << '\n';
    }

    return 0;
}