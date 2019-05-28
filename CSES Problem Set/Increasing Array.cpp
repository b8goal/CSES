#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	long long tmp;
	int arr[200000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	tmp = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			tmp += arr[i - 1] - arr[i];
			arr[i] += arr[i - 1] - arr[i];
		}
	}
	cout << tmp << '\n';
	return 0;
}