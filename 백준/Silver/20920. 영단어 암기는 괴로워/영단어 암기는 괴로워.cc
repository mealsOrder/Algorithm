#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int N, M;
	string str;
	map<std::string, int> m;

	cin >> N >> M;

	while (N--)
	{
		cin >> str;

		if (str.size() >= M)
			m[str]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), [](pair<string,int> const& l, pair<string, int> const& r)
		{
			if (l.second != r.second)
				return l.second > r.second;

			else if (l.first.length() != r.first.length())
				return l.first.length() > r.first.length();

			else
				return l.first < r.first;
		});

	for (auto& val : v)
		cout << val.first << '\n';
}