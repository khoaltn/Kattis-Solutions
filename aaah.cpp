/*
Written by Khoa Nguyen
November 2015.
Problem Aaah at https://open.kattis.com/problems/aaah
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;

	if (s2.length() > s1.length()) cout << "no";
	else cout << "go";
	
}
