#include <iostream>
#include <algorithm>
using namespace std;
int num[10];
int a[10];

void go(int index, int start ,int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; ++i) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = start; i < n; ++i) {
		a[index] = num[i];
		go(index + 1, i ,n, m);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
	}
	sort(num, num + n);
	go(0,0,n, m);
	return 0;
}