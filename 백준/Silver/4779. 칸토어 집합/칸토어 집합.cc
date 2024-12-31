#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>
#include<cmath>
using namespace std;

void cantor(int n) {
	int size = pow(3, n - 1);

	if (n == 0) {
		cout << "-";
		return;
	}

	cantor(n - 1);
	for (int i = 0; i < size; i++) {
		cout << " ";
	}
	cantor(n - 1);

}

int main() {
    ios_base::sync_with_stdio(0);  
    cin.tie(0);cout.tie(0);  

	int N;

	while (cin >> N) {
		cantor(N);
		cout << "\n";
	}

	return 0;
}