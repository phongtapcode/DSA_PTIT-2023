#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
int x[50], used[50], n, c_min = INT_MAX;
int cost = 0; int FOPT = INT_MAX; int a[1000][1000];

void Try(int i){ 
	for(int j = 2; j <= n; j++){ 
		if(!used[j]){ 
			x[i] = j; 
			used[j] = true; 
			cost += a[x[i - 1]][x[i]]; 
			if(i == n){ 
				int sum = 0; 
				for(int i = 2; i <= n; i++){ 
					sum += a[x[i - 1]][x[i]]; 
				} 
				sum += a[x[n]][1]; 
				FOPT = min(FOPT, sum); 
			} else if(cost + (n - i + 1) * c_min < FOPT){ 
				Try(i + 1); 
			} 
			used[j] = false; 
			cost -= a[x[i - 1]][x[i]];
		} 
	} 
} 

int main() { 
	cin >> n; 
	x[1] = 1; 
	for(int i = 1; i <= n; i++){ 
		for(int j = 1; j <= n; j++){ 
			cin >> a[i][j]; 
			c_min = min(c_min, a[i][j]); 
		} 
	} 
	Try(2); 
	cout << FOPT << endl; 
	return 0;
}

