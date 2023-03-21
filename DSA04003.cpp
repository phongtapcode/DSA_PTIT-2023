#include<bits/stdc++.h>
using namespace std;
long long mod=123456789;
long long Pow(int a, long long b){
	if(b==0)return 1;
	if(b==1)return a;
	long long tmp=Pow(a,b/2);
	if(b%2==0)return tmp*tmp%mod;
	else return ((tmp*tmp)%mod)*a%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<Pow(2,n-1)<<endl;
	}
}
