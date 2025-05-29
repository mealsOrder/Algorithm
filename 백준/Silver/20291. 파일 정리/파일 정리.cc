#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

const int MX = 50001;

map<string,int>m;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int N;
    cin >> N;

    for(int i=0;i<N;i++){
        string str = "";
        string idx = "";
        bool flag = false;
        cin >> str;

        for(int j = 0;j<str.length();j++){
            if(str[j] == '.'){
                flag = true;
            }
            
            if(flag && str[j] != '.')idx+=str[j];
        }
        m[idx]++;
        
    }

    for(auto e : m){
        string key;
        int cnt;
        tie(key,cnt) = e;
        cout << e.first << ' ' << e.second << '\n';
    }
    return 0;
}