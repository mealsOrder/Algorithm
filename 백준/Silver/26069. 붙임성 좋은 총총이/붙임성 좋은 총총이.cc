#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<string, bool> isDancing;
int N, answer;
string A, B;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N;
    while (N--)
    {
        cin >> A >> B;
        // 전염시키는 경우
        if (((isDancing[A] || A == "ChongChong") && !isDancing[B]) || (isDancing[B] || B == "ChongChong") && !isDancing[A])
        {
            isDancing[A] = isDancing[B] = true;
            ++answer;
        }
    }
    cout << answer + 1;
    return 0;
}