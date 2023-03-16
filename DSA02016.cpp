#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
bool cot[20], xuoi[20], nguoc[20];
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(!cot[j] && !xuoi[n + i - j] && !nguoc[i + j - 1]) {
			cot[j] = true;
			xuoi[n + i - j] = true;
			nguoc[i + j - 1] = true;
			if(i == n) cnt++;
			else Try(i + 1);
			cot[j] = false;
			xuoi[n + i - j] = false;
			nguoc[i + j - 1] = false;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		memset(cot, false, sizeof(cot));
		memset(xuoi, false, sizeof(xuoi));
		memset(nguoc, false, sizeof(nguoc));
		Try(1);
		cout << cnt << endl;
		cnt = 0;
	}
	return 0;
}

