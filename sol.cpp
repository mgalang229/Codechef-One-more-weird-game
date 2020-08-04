#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, m;
	cin >> n >> m;
	cout << n * (m - 1) + m * (n - 1) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
