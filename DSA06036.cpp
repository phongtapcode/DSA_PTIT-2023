#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n,k;
		cin>>n>>k;
		long long a[n];
		map<long long,long long> b;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a,a+n);
		int ok=0;
		for(int i=0; i<n-2; i++) {
			if(a[i]>k) {
				continue;
			} else {
				for(int j=i+1; j<n ; j++) {
					if(a[i]+a[j]<=k) {
						if(binary_search(a+j+1,a+n, k-a[i]-a[j])) {
							ok=1;
						}
					}
				}
			}
			if(ok==1)break;
		}
		if(ok==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
