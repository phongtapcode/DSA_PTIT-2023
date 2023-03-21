#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,k;
		cin >> n>>k;
		long long dp[n+5]={0};
		dp[0]=dp[1]=1;
		for(long long i=2; i<=n; i++) {
			for(long long j=1; j<=min(i,k); j++) {
				dp[i]+=dp[i-j];
				dp[i]%=mod;
			}
		}
		cout<<dp[n]<<endl;
	}
}
