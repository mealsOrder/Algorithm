#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
const int MX = 100001;

char res[MX*2];
int stack_arr[MX];
int top=-1;
int arr[MX];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int N,num=1,idx=0,res_idx=0;

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    while(1){
        if(top==-1||stack_arr[top]<arr[idx]){
            stack_arr[++top]=num++;
            res[res_idx++]='+';
        }
        else if(stack_arr[top] == arr[idx]){
            top--;
            res[res_idx++]='-';
            idx++;
        }
        else{
            cout << "NO\n";
            return 0;
        }
        if(res_idx == N*2)break;
    }
    for(int i=0;i<res_idx;i++){
        cout << res[i] << '\n';
    }
    return 0;
}