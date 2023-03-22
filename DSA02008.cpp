#include<bits/stdc++.h>
using namespace std;
int x[101], n, k,used[101],a[100][100];
vector<string> b;
void check() {
	int j=1;
	int sum=0;
	for(int i=1; i<=n; i++) {
		sum+=a[i][x[j]];
		j++;
	}
	string c="";
	if(sum==k) {
		for(int i=1; i<=n; i++) {
			c+=to_string(x[i])+' ';
		}
		b.push_back(c);
	}
}
void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(used[j]==0) {
			x[i]=j;
			used[j]=1;

			if(i==n)check();
			else Try(i+1);

			used[j]=0;
		}
	}
}
int main() {
	cin>>n>>k;
	memset(used,0,sizeof(used));
	Try(1);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
	}
	Try(1);
	cout<<b.size()<<endl;
	for(int i=0; i<b.size(); i++) {
		cout<<b[i]<<endl;
	}
}
