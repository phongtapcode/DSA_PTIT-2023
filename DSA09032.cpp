#include<bits/stdc++.h>
using namespace std;
int dinh , canh,u;
bool visited[100005];
vector<int> adj[100005];
vector<int> cnt1;
int cnt=0;
void DFS(int i){
	cnt++;
	visited[i]=true;
	for(auto x: adj[i]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>dinh>>canh;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=canh; i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=1; i<=dinh; i++){
			if(!visited[i]){
				DFS(i);
				cnt1.push_back(cnt);
				cnt=0;
			}
		}
		int max1=0;
		for(int i=0; i<cnt1.size(); i++){
			max1=max(cnt1[i],max1);
		}
		cout<<max1<<endl;
		cnt1.clear();
		for(int i=1; i<=dinh; i++){
			adj[i].clear();
		}
		cnt=0;
	}
}
