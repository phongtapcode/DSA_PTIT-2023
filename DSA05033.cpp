#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string t=s;
		reverse(t.begin(), t.end());
		int dp[41][41]={};
		memset(dp,0,sizeof(dp));
		for(int i=0; i<t.size(); i++){
			for(int j=0; j<t.size(); j++){
				if(s[i]==t[j]){
					dp[i+1][j+1]=dp[i][j]+1;
				}else{
					dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
				}
			}
		}
		int m = dp[t.size()][t.size()];
		cout<<t.size()-m<<endl;
	}
}
