#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int n;
	cin >> n;
	getchar();
	
	for (int i = 0; i < n; i++) {
		getline(cin, input);
		int vow = 0, con = 0;

		for (int j = 0; j < input.size(); j++) {
			switch(input[j]) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vow = vow + 1;
				break;
			case ' ':
				break;
			default:
				con = con + 1;
				break;
			}
		}
		cout << con << " " << vow << "\n";
	}
	return 0;
}