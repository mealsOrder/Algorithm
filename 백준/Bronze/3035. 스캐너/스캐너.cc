#include <iostream>
#include <string>
using namespace std;

int main(){
    int R, C, Zr, Zc;
    cin >> R >> C >> Zr >> Zc;

    string row;
    for (int i = 0; i < R; ++i){
        cin >> row;
        string enlarged = "";
        // 가로 확대
        for (char ch : row){
            for (int zc = 0; zc < Zc; ++zc){
                enlarged += ch;
            }
        }
        // 세로 확대
        for (int zr = 0; zr < Zr; ++zr){
            cout << enlarged << '\n';
        }
    }
    return 0;
}