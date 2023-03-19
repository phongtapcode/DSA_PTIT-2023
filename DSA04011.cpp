#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string a,b;
		cin>>a>>b;
		long long a1=0,b1=0;
		int cnt1=a.size()-1,cnt2=b.size()-1;
		for(int i=0; i<a.size(); i++) {
			if(a[i]=='1') {
				a1+=pow(2,cnt1);
			}
			cnt1--;
		}
		for(int i=0; i<b.size(); i++) {
			if(b[i]=='1') {
				b1+=pow(2,cnt2);
			}
			cnt2--;
		}
		cout<<a1*b1<<endl;
	}
}
