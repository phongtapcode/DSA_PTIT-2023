#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin >> n;
		long long a[n];
		vector<long long> dp(n,1);
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		long long max1=0;
		for(int i=1; i<n; i++) {
			for(int j=0; j<i; j++) {
				if(a[i]>a[j]) {
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
			max1=max(dp[i],max1);
		}
		cout<<n-max1<<endl;
	}
}
