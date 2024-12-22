#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 1000000;
vector<bool> isprime(n + 1, true);

void SetPrime()
{
    for (int i = 2; i * i <= n; i++)
    {
        if (!isprime[i])
            continue;

        for (int j = i * i; j <= n; j += i)
            isprime[j] = false;
    }
}

int main()
{
    SetPrime();
    int N, n;
	cin >> N;

	while (N--)
	{
        int count = 0;
		cin >> n;
        vector<int> v;

		for (int i = 2; i < n; i++)
		{
            if (isprime[i])
                v.push_back(i);
		}

        for (auto it = v.begin(); it != v.end(); ++it)
        {
            int other = n - *it;

            if (other < *it)
                break;

            if(binary_search(it, v.end(), other))
                count++;
        }

        cout << count << '\n';
	}
}