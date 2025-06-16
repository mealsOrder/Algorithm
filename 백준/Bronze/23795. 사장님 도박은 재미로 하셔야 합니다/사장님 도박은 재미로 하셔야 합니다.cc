#include <iostream>
using namespace std;

int main(){
    int sum = 0, x;
    while (cin >> x && x != -1){
        sum += x;
    }
    cout << sum << '\n';
    return 0;
}