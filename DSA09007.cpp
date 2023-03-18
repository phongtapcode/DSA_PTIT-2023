#include<bits/stdc++.h>
using namespace std;
int dinh,canh,s,t;
vector<int> adj[1000];
bool visited[1000];
int parent[1000];
void BFS(int u) {
	queue<int> d;
	d.push(u);
	visited[u]=true;
	while(!d.empty()) {
		int e=d.front();
		d.pop();
		for(auto v: adj[e]) {
			if(!visited[v]) {
				d.push(v);
				visited[v]=true;
				parent[v]=e;
			}
		}
	}
}
void path(int s,int t) {
	memset(visited, false, sizeof(visited));
	BFS(s);
	if(!visited[t]) {
		cout<<"-1"<<endl;
	} else {
		vector<int> tmp;
		while(t!=s) {
			tmp.push_back(t);
			t=parent[t];
		}
		tmp.push_back(s);
		for(int i=tmp.size()-1; i>=0; i--) {
			cout<<tmp[i]<<' ';
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

