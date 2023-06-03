

// find the maximum size connected component


#include <bits/stdc++.h>
using namespace std;

const int mx = 123;
bool vist[mx];
vector <int> adj[mx];
int cunt;

void dfs(int n){
	
	vist[n] = 1;
	cunt ++;
	
	for(auto u: adj[n]){
		if(vist[u] == 0){
			dfs(u);
		}
	}
}


int main(){

	int node, edge;   cin >> node >> edge;
	
	while(edge--){
		int n1, n2;   cin >> n1 >> n2;
		adj[n1].push_back(n2);
		adj[n2].push_back(n1);
	}
	
	int ans = -1;
	
	for(int i = 1 ; i <=node; i++){
		
		if(vist[i] == 0) {
			cunt = 0;
			dfs(i);
			ans = max(ans, cunt);
		}
	}
	
	cout  << ans << endl;
}


/*

input:

8 5

1 2
2 3
2 4
3 5
6 7


*/
