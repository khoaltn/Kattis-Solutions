#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;
	string per = "PER";
	int n = s.length(), j = 0, counter = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] != per[j]) {
			s[i] = per[j];
			counter++;
		}
		j++;
		if (j > 2) j = 0;
	}
	cout << counter << endl;
}
