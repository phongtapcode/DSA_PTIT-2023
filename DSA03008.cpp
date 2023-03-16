#include<bits/stdc++.h>
using namespace std;
bool sx(pair<int,int> a, pair<int,int> b) {
	return a.second<b.second;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<pair<int,int>> a;
		int b,c;
		int d[n+1];
		int e[n+1];
		for(int i=1; i<=n; i++) {
			cin>>d[i];
		}
		for(int i=1; i<=n; i++) {
			cin>>e[i];
			a.push_back({d[i],e[i]});
		}
		sort(a.begin(), a.end(),sx);
		int sum=1;
		int a1=a[0].second;
		for(int i=1; i<a.size(); i++) {
			if(a[i].first >= a1) {
				sum++;
				a1=a[i].second;
			}
		}
		cout<<sum<<endl;
	}
}
