#include <iostream>
using namespace std;

int a[6] = { 1, 2, 3, 3, 4, 10 };
int b[7] = { 1, 2, 2, 2, 3, 5, 10 };
int t, i1, g, e;
int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		g = 0; e = 0;
		for (int j = 0; j < 6; j++) {
			cin >> i1;
			g += a[j] * i1;
		}
		for (int j = 0; j < 7; j++) {
			cin >> i1;
			e += b[j] * i1;
		}
		cout << "Battle " << i << ": ";
		if (g < e) cout << "Evil eradicates all trace of Good" << endl;
		else if (g > e) cout << "Good triumphs over Evil" << endl;
		else cout << "No victor on this battle field" << endl;
	}
	return 0;
}