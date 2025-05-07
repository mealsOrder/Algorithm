#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

ll fact(int n){
    if(n <= 1) return 1;
    return n*fact(n-1);
}

int main(){
    
    int N;
    cin >> N;

    cout << fact(N)<<'\n' ;
    
    return 0;
}