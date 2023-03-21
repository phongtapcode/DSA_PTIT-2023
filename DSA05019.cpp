#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		int dp[n+1][m+1];
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin>>a[i][j];
				dp[i][j]=a[i][j];
			}
		}
		int max1=0;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				if(a[i][j]==0)continue;
				if(a[i][j]==a[i-1][j] && a[i-1][j]== a[i-1][j-1] && a[i-1][j-1]==a[i][j-1]) {
					dp[i][j]=min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
				}
				max1=max(max1, dp[i][j]);
			}
		}
		cout<<max1<<endl;
	}
}
