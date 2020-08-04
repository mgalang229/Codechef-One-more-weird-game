#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, m;
	cin >> n >> m;
	int a = n - 1;
	int d = 1 + ((n - 1) * 2);
	int ans = 0;
	if(m > 1) {
		ans = a + ((m - 1) * d);
	}
	else if(m == 1) {
		ans = n - 1;
	}
	cout << ans << "\n";
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
