#include<bits/stdc++.h>
using namespace std;
int dinh,canh,s,t;
vector<int> adj[1000];
bool visited[1000];
int parent[1000];
void DFS(int u) {
	visited[u]=true;
	for(auto v: adj[u]) {
		if(!visited[v]) {
			parent[v]=u;
			DFS(v);
		}
	}
}
void path(int s,int t) {
	memset(visited,false,sizeof(visited));
	memset(parent, 0, sizeof(parent));
	DFS(s);
	if(!visited[t]) {
		cout<<"-1"<<endl;
	} else {
		vector<int> a;
		while(t!=s) {
			a.push_back(t);
			t=parent[t];
		}
		a.push_back(s);
		reverse(a.begin(), a.end());
		for(auto i:a) {
			cout<<i<<' ';
		}
		cout<<endl;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>dinh>>canh>>s>>t;
		for(int i=1; i<=canh; i++) {
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		path(s,t);
		for(int i=0; i<=dinh; i++) {
			adj[i].clear();
		}
	}
}

