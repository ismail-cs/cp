
// find how many connected components

#include <bits/stdc++.h>
using namespace std;

const int mx = 123;
bool vist[mx];
vector <int> adj[mx];

void dfs(int n){
	
	vist[n] = 1;
	
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
	
	int cunt = 0;
	
	for(int i = 1 ; i <=node; i++){
		if(vist[i] == 0) {
			cunt++;
			dfs(i);
		}
	}
	
	cout  << cunt << endl;
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
