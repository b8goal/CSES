#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int cnt, mx;
	char tmp = s[0];
	cnt = mx = 1;
	for (int i = 1; s[i]; i++) {
		if (tmp == s[i])
			cnt++;
		else {
			mx = max(mx, cnt);
			cnt = 1;
			tmp = s[i];
		}
	}mx = max(mx, cnt);
	cout << mx << '\n';
	return 0;
}