#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tmp;
    stack<int> s;
    vector<int> v, res; // res: 결과벡터
    int f[1000001]={0, };
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>tmp;
        v.push_back(tmp);
        f[tmp]++;
    }
    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(s.empty()){
            res.push_back(-1);
        }
        else{
            // !s.empty()인 경우
            while(!s.empty() && f[v[i]]>=f[s.top()]){
                s.pop();
            }

            if(s.empty()) res.push_back(-1);
            else res.push_back(s.top());
        }
        
        s.push(v[i]);
    }

    reverse(res.begin(), res.end());
    for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}