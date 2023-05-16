#include<bits/stdc++.h>
using namespace std;

int dinh,canh;
bool visited[100];
vector<int> adj[100];
int cnt=1;
bool check=0;
void DFS(int i,int cnt) {
	if(cnt==dinh) {
		check=1;
	}
	if(check)return;
	visited[i]=true;
	for(auto x: adj[i]) {
		if(!visited[x]) {
			DFS(x,cnt+1);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>dinh>>canh;
		for(int i=1; i<=canh; i++) {
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=1; i<=dinh; i++) {
			DFS(i,1);
			memset(visited,false,sizeof(visited));
			if(check)break;
		}
		if(check) {
			cout<<"1"<<endl;
		} else {
			cout<<"0"<<endl;
		}
		check=0;
		for(int i=1; i<=dinh; i++) {
			adj[i].clear();
		}
		cnt=0;
	}
}
