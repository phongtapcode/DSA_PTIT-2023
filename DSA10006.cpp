#include<bits/stdc++.h>
using namespace std;
int dinh , canh,u;
bool visited[1000];
vector<int> adj[1000];
vector<pair<int,int>> khung;
void DFS(int i){
	visited[i]=true;
	for(auto x: adj[i]){
		if(!visited[x]){
			khung.push_back({i,x});
			DFS(x);
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
		DFS(u);
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
