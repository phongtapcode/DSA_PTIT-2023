#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		for(int i=1; i<=n; i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		string res="Yes";
		for(int i=1; i<=n; i++) {
			if(b[i]!=a[i] && b[i]!=a[n-i+1]) {
				res="No";
				break;
			}
		}
		cout<<res<<endl;
	}
}
