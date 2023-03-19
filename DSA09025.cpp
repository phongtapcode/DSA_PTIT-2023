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
		for(int i=a.size()-1; i>=0; i--) {
			cout<<a[i]<< ' ';
		}
		cout<<endl;
	}
}
int main() {
	int t1;
	cin>>t1;
	while(t1--) {
		cin>>dinh>>canh>>s>>t;
		for(int i=1; i<=canh; i++) {
			int a,b;
			cin>>a>>b;
			adj[a].push_back(b);
		}
		path(s,t);
		for(int i=1; i<=dinh; i++) {
			adj[i].clear();
		}
	}
}
