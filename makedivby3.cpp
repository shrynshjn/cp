#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0 ; i < t; i++) {
		int n;
		cin >> n;
		cout << "3";
		n--;
		for (; n > 1; n--) {
			cout << "0";
		}
		if (n) {
			cout << "3";
		}
		cout << "\n";
	}
}