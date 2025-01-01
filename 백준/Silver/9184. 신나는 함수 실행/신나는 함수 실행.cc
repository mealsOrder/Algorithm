#include<iostream>
using namespace std;

int dp[21][21][21]={0,};

int W(int a,int b,int c){
    if(a<=0||b<=0||c<=0){
        return 1;
    }else if(a>20||b>20||c>20){
        return W(20,20,20);
    }else if(dp[a][b][c]!=0){
        return dp[a][b][c];
    }else if(a<b&&b<c){ 
        dp[a][b][c]=W(a,b,c-1)+W(a,b-1,c-1)-W(a,b-1,c);
    }else{
         dp[a][b][c]=W(a-1,b,c)+W(a-1,b-1,c)+W(a-1,b,c-1)-W(a-1,b-1,c-1);
    }
    return dp[a][b][c];
}
int main(){
    int a,b,c;
    
    while(true){
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1){
            break;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<W(a,b,c)<<"\n";
    }
    return 0;
}