#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    int t, x, y;

    cin >> t;

    for(int i = 0 ; i < t; i++)
    {
        cin >> x >> y;
        cout << x + y << "\n";
    }
    
    return 0;
}