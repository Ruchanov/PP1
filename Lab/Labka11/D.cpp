#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	bool ok = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1] % 4)==0)
				ok = false;
		}
	}
	if (ok)
		cout << "YES";
	else cout << "NO";
	return 0;

	
}