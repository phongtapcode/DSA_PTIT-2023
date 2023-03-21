#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long dp[n+5]= {0};
		dp[0]=dp[1]=1;
		dp[2]=2;
		for(long long i=3; i<=n; i++) {
			for(long long j=1; j<=3; j++) {
				dp[i]+=dp[i-j];
			}	
		}
		cout<<dp[n]<<endl;
	}
}

