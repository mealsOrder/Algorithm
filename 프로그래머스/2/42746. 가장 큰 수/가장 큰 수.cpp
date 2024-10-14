#include <string>
#include <vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a+b>b+a;
}

string solution(vector<int> n) {
    string ans="";
    vector<string>v;

    for(int num: n){
        v.push_back(to_string(num));
    }

    sort(v.begin(),v.end(),compare);

    
    for(string num:v){
        ans+=num;
    }

    if(ans[0] == '0' ) return "0";
    return ans;
}