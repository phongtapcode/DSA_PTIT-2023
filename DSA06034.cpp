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
		long long cnt=0;
		for(int i=0; i<n-1; i++) {
			b[a[i]]--;
			if(binary_search(a+i+1, a+n, k-a[i])) {
				cnt+=b[k-a[i]];
			}
		}
		cout<<cnt<<endl;
	}
}
