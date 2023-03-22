#include<bits/stdc++.h>
using namespace std;
long long a[93];
void ktao(){
	a[1]=a[2]=1;
	for(int i=3; i<93; i++){
		a[i]=a[i-1]+a[i-2];
	}
}
char tim(int n,int k){
	if(n==1)return 'A';
	if(n==2)return 'B';
	if(k<=a[n-2])return tim(n-2,k);
	else return tim(n-1,k-a[n-2]);
}
int main(){
	int t;
	cin>>t;
	ktao();
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<tim(n,k)<<endl;
	}
}
