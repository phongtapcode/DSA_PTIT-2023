#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int pow(long long a,long long b) {
	if(b==0)return 0;
	if(b==1)return a%mod;
	long long tmp=pow(a,b/2);
	if(b%2==1)return (tmp*tmp%mod)*a%mod;
	return tmp*tmp%mod;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		string a;
		cin>>a;
		string b=a;
		reverse(b.begin(), b.end());
		cout<<pow(stoll(a),stoll(b))<<endl;
	}
}
