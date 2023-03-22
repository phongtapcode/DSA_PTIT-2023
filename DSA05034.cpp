#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int dp[n+5];
	  memset(dp,0,sizeof(dp));
		dp[0]=dp[1]=1;
		long long mod=1e9+7;
		for(int i=2; i<=n; i++){
			for(int j=1; j<=min(i,k); j++){
			    dp[i]+=dp[i-j];
			    dp[i]%=mod;
			}
		}
		cout<<dp[n]<<endl;
	}
}
