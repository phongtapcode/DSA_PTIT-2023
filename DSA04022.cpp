#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i=2;
		int cnt=0;
		while(k%i!=i/2 && cnt<n*n){
			i*=2;
			cnt++;
		}
		cout<<char(cnt+'A')<<endl;
	}
}
