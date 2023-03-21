#include<bits/stdc++.h>
using namespace std;
bool sx(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin>>n;
		vector<pair<int,int>> a;
		for(int i=1; i<=n; i++){
			int x,y;
			cin>>x>>y;
			a.push_back({x,y});
		}
		sort(a.begin(), a.end(), sx);
		int cnt=1;
		int a1=a[0].second;
		for(int i=1; i<n; i++){
			if(a[i].first>=a1){
				a1=a[i].second;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
