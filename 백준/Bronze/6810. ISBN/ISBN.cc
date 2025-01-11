#include <iostream>
using namespace std;

int main() {
	int a[3], sum = 91;

	for (int i = 0; i < 3; i++) {
		cin >> a[i];

		if (i == 1) {
			a[i] = 3 * a[i];
		}
		sum = sum + a[i];
	}
	cout << "The 1-3-sum is "  << sum;

	return 0;
}