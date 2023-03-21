#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,s,m;
		cin>>n>>s>>m;
		int sum=0;
		int ok=0;
		for(int i=1; i<=s-s/7 ; i++) {
			sum+=n;
			if(sum>=s*m) {
				cout<<i<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0)cout<<"-1"<<endl;
	}
}
