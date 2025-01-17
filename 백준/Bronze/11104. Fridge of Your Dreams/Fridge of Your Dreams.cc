#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		cout << stoi(s, nullptr, 2) << '\n';
	}
}