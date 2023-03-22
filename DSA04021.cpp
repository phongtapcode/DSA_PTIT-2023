#include<bits/stdc++.h>
using namespace std;
long long a[93];
void ktao(){
	a[1]=1;
	a[2]=1;
	for(int i=3; i<=93; i++){
		a[i]=a[i-1]+a[i-2];
	}
}
int search(long long n,long long k){
	if(n==1)return 0;
	if(n==2)return 1;
	if(k<=a[n-2]){
		return search(n-2,k);
	}else{
		return search(n-1,k-a[n-2]);
	}
}
int main(){
	int t;
	cin>>t;
	ktao();
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<search(n,k)<<endl;
	}
}
