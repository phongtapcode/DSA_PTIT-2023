#include<bits/stdc++.h>
using namespace std;
bool sx(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> a;
		int b,c;
		for(int i=1; i<=n; i++){
			cin>>b>>c;
			a.push_back({b,c});
		}
		sort(a.begin(), a.end(),sx);
		int sum=1;
		int a1=a[0].second;
		for(int i=1; i<a.size(); i++){
			if(a[i].first >= a1){
				sum++;
				a1=a[i].second;
			}
		}
		cout<<sum<<endl;
	}
}
//1
//6
//5 9
//1 2
//3 4
//0 6
//5 7
//8 9

//1 2
//3 4
//0 6
//5 7
//5 9
//8 9
