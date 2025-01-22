#include <iostream>
#include <vector>
using namespace std;
vector<int>prefix_sum[26];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string S;
	cin >> S;
	for (int i = 0; i < S.size(); ++i) {
		for (int j = 0; j < 26; ++j) {
			if (i == 0) {
				int num = S[i] - 'a';
				if (num == j) {
					prefix_sum[j].push_back(1);
				}
				else {
					prefix_sum[j].push_back(0);
				}
			}
			else {
				int num = S[i] - 'a';
				if (num == j) {
					prefix_sum[j].push_back(prefix_sum[j][i - 1] + 1);
				}
				else {
					prefix_sum[j].push_back(prefix_sum[j][i - 1]);
				}
			}
		}
	}
	int q, l, r;
	char alphabet;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> alphabet >> l >> r;
		int idx = alphabet - 'a';
		if (l == 0) {
			cout << prefix_sum[idx][r] << "\n";
		}
		else {
			cout << prefix_sum[idx][r] - prefix_sum[idx][l - 1] << "\n";
		}
	}
}