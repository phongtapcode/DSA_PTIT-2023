#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int n;
int ok=0;
void Try(int i, int j, string s) {
	if(i==n && j==n) {
		cout<<s<<' ';
		ok=1;
		return;
	}
	if(i+1 <= n && a[i+1][j]==1) {
		Try(i+1,j,s+"D");
	}
	if(j+1<=n && a[i][j+1]==1) {
		Try(i, j+1, s+"R");
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0) {
			cout<<"-1";
		} else {
			Try(1,1,"");
			if(ok==0)cout<<"-1";
		}
		cout<<endl;
		ok=0;
	}
}
