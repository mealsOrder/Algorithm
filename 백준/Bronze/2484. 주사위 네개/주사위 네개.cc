#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int result = 0;  // 최대 상금

    while (N--){
        int cnt[7] = {};  // 주사위 눈(1~6)의 개수 카운트용 배열
        int dice[4];
        
        for (int i = 0; i < 4; i++){
            cin >> dice[i];
            cnt[dice[i]]++;
        }

        int prize = 0;

        // 1. 같은 눈 4개
        for (int i = 1; i <= 6; i++){
            if (cnt[i] == 4)
                prize = 50000 + i * 5000;
        }

        // 2. 같은 눈 3개
        for (int i = 1; i <= 6; i++){
            if (cnt[i] == 3)
                prize = 10000 + i * 1000;
        }

        // 3. 두 쌍
        int pair1 = 0, pair2 = 0;
        for (int i = 6; i >= 1; i--){
            if (cnt[i] == 2){
                if (pair1 == 0) pair1 = i;
                else pair2 = i;
            }
        }
        if (pair1 && pair2)
            prize = max(prize, 2000 + pair1 * 500 + pair2 * 500);

        // 4. 한 쌍
        for (int i = 1; i <= 6; i++){
            if (cnt[i] == 2 && !(pair1 && pair2))
                prize = max(prize, 1000 + i * 100);
        }

        // 5. 모두 다른 눈
        if (prize == 0){
            int maxNum = *max_element(dice, dice + 4);
            prize = maxNum * 100;
        }

        result = max(result, prize);
    }

    cout << result << "\n";

    return 0;
}
