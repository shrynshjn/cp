#include<iostream>
#include<math.h>
using namespace std;

int minimum(int a, int b) {
	return a < b ? b : a;
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cout << "t" << i << "\n";
		int n, k, l;
		cin >> n;
		cin >> k;
		cin >> l;
		cout << "imput is in";
		if (k < 2 && n > 1) {
			cout << "np 1";
			cout << -1 << "\n";
			continue;
		} 
		int minRequiredOvers = ceil(n / k); 
		if (l < minRequiredOvers) {
			cout << "np 2";
			cout << -1 << "\n";
			continue;
		}
		cout << "It is possible";
		// now it is possible
		if (k % 2 != 0) {
			cout << "odd number of players repeat in groups of 3 till exhausted\n";
			int numOfRepeats = minimum(floor(n/3), l);
			cout << "repeates " << numOfRepeats << "\n";
			int offset = 0;
			for (; n > 3; offset+=3) {
				for (int o = 1; o < numOfRepeats; o++, n-= 3) {
					cout << offset + 1 << " " << offset + 2 << " " << offset + 3 << " ";
				}
			}
			// for (int j = 1; j <= n; j++) {
			// 	cout << offset + j << " ";
			// }

		} else {
			cout << "odd number of players repeat in groups of 2 till exhausted";
			int numOfRepeats = minimum(floor(n/2), l);
			cout << "repeates " << numOfRepeats;
			
			int offset = 0;
			for (; n > 2; offset+=2) {
				for (int o = 1; o < numOfRepeats; o++, n-= 2) {
					cout << offset + 1 << " " << offset + 2 << " ";
				}
			}
			for (int j = 1; j <= n; j++) {
				cout << offset + j << " ";
			}
	
		}
		cout << "end\n";

	}
}