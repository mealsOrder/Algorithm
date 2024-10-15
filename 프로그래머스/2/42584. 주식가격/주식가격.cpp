#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> p) {
    vector<int> ans(p.size());
    stack<int>s;
    
    
    for(int i=0;i<p.size();i++){
        while(!s.empty() && p [s.top()] > p[i]){
            int idx = s.top();
            s.pop();
            ans[idx] = i - idx;
        }
        s.push(i);
    }

    while (!s.empty())
    {
        int idx = s.top();
        s.pop();
        ans[idx] = p.size() - idx - 1;
    }
    
    return ans;
}