#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int n, x, ans;
bool a[200001];

int main(void) {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> x;
		a[x] = true;
	}
	for (int i = 1; i <= n; i++)
		if (!a[i])
			ans = i;
	cout << ans << '\n';
	return 0;
}