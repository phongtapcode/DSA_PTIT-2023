#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n = 8,b[10000], a[1000][1000];
bool cot[10000], xuoi[10000], nguoc[1000];
ll res = 0;
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(!cot[j] && !xuoi[n + i - j] && !nguoc[i + j - 1]) {
			b[i] = j;
			cot[j] = true;
			xuoi[n + i - j] = true;
			nguoc[i + j - 1] = true;
			if(i == 8) {
				ll sum = 0;
				for(int k = 1; k <= n; k++) {
					sum += a[k][b[k]];
				}
				res = max(res, sum);
			} else {
				Try(i + 1);
			}
			cot[j] = false;
			xuoi[n + i - j] = false;
			nguoc[i + j - 1] = false;
		}
	}
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t;
	cin >> t;
	while(t--) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		memset(cot, false, sizeof(cot));
		memset(xuoi, false, sizeof(xuoi));
		memset(nguoc, false, sizeof(nguoc));
		Try(1);
		cout << res << endl;
		res = 0;
	}
	return 0;
}
