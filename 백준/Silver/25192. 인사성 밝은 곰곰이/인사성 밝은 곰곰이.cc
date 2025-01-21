#include <iostream>
#include <set>

using namespace std;

int main()
{
    int input, answer = 0;
    string str;
    set<string> s;
    cin >> input;

    while (input--)
    {
        cin >> str;
        if (str == "ENTER")
        {
            answer += s.size();
            s.clear();
        }
        else
        {
            if (s.find(str) == s.end())
                s.insert(str);
        }
    }

    cout << answer + s.size();
}