#include<bits/stdc++.h>
using namespace std;
int dinh , canh,u;
bool visited[10000];
vector<int> adj[10000];
vector<pair<int,int>> khung;

void BFS(int i){
	queue<int> qu;
	qu.push(i);
	visited[i]=true;
	while(!qu.empty()){
		int t=qu.front();
		qu.pop();
		for(auto x: adj[t]){
			if(!visited[x]){
			qu.push(x);
			visited[x]=true;
			khung.push_back({t,x});
		}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>dinh>>canh>>u;
		memset(visited, false, sizeof(visited));
		for(int i=1; i<=canh; i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int check=0;
		BFS(u);
		for(int i=1; i<=dinh; i++){
			adj[i].clear();
			if(!visited[i]){
				check=1;
			}
		}
		if(check==1){
			cout<<"-1"<<endl;
		}else{
			for(int i=0; i<khung.size(); i++){
				cout<<khung[i].first<<' '<<khung[i].second<<endl;
			}
		}
		khung.clear();
	}
}
