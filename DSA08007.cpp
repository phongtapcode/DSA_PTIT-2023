#include<bits/stdc++.h>
using namespace std;
vector<long long> v;

void init() {
	queue<long long> q;
	q.push(1);
	while(1) {
		long long tmp = q.front();
		q.pop();
		if(tmp > 9e17) break;
		v.push_back(tmp);
		q.push(tmp * 10 + 0);
		q.push(tmp * 10 + 1);
	}
}
int main() {
	int t;
	cin >> t;
	init();
	while(t--) {
		long long n;
		cin >> n;
		int cnt = 0;
		for(long long x : v) {
			if(x > n) break;
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}

