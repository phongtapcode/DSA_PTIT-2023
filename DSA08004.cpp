#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long k;
		cin>>k;
		string s;
		cin>>s;
		map<char, long long> a;
			for(int i=0; i<s.length(); i++) {
				a[s[i]]++;
			}
			while(k--) {
				long long max1=0;
				char c;
				for(auto x: a) {
					if(x.second>max1) {
						max1=x.second;
						c=x.first;
					}
				}
				a[c]--;
			}
			long long tong=0;
			for(auto x: a) {
				tong+=x.second*x.second;
			}
			cout<<tong<<endl;
		}
}
