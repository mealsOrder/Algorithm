#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> dataStructure(n); //스텍인지 큐인지 입력받기
    for (auto& i : dataStructure){
        cin >> i;
    }

    deque <int> queuestack;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        //큐인 경우에만 처리, 스택은 없다고 침(push값 = pop값) 
        if (dataStructure.at(i) == 0) 
            queuestack.push_back(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        queuestack.push_front(x);
        cout << queuestack.back() << " ";
        queuestack.pop_back();
    }
    return 0;
}
