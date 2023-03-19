#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n=a.size(), m=b.size();
		int c[n+1][m+1];
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				if(i==0|| j==0){
					c[i][j]=0;
				}else{
					if(a[i-1]==b[j-1]){
						c[i][j]=c[i-1][j-1]+1;
					}else{
						c[i][j]=max(c[i][j-1], c[i-1][j]);
					}
				}
			}
		}
		cout<<c[n][m]<<endl;
	}
}

