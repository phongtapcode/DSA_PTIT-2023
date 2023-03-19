#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int m,n;
		cin>>m>>n;
		int a[m],b[n],a1[m], b1[n],c[m+n];
		for(int i=0; i<m; i++){
			cin>>a[i];
			a1[i]=i;
		}
		for(int i=0; i<n; i++){
			cin>>b[i];
			b1[i]=i;
		}
		memset(c,0,sizeof(c));
		for(int i=0; i<m; i++){
			int d=a[i];
			for(int j=0; j<n; j++){
				int mu=a1[i]+b1[j];
				int tich=a[i]*b[j];
				c[mu]+=tich;
			}
		}
		for(int i=0; i<m+n-1; i++){
			cout<<c[i]<<' ';
		}
		cout<<endl;
	}
}
