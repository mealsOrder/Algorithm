#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int total_remain = 0;

    for (int i = 0; i < N; i++){
        int students, apples;
        cin >> students >> apples;
        total_remain += apples % students;
    }

    cout << total_remain << '\n';

    return 0;
}
