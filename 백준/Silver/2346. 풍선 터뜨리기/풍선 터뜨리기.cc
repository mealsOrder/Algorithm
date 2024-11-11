#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
const int MX = 1001;
int arr[MX];
deque<pair<int,int>>s;
int num;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        int a;
        cin >> a;
        s.push_back({a,i});
    }
    num = s.front().first;
    cout << s.front().second << " ";
    s.pop_front();

    while(!s.empty()){
        if(num >=0){
            for(int i=0;i<num-1;i++){
                s.push_back(s.front());
                s.pop_front();
            }
            num = s.front().first;
			cout << s.front().second << " ";
			s.pop_front();
        }
        else{
            
            for(int i=0;i>num+1;i--){
                s.push_front(s.back());
                s.pop_back();
            }
            num = s.back().first;
			cout << s.back().second << " ";
			s.pop_back();
        }
    }

    return 0;
}
