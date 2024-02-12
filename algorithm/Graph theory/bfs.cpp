
// bfs implementation


#include <bits/stdc++.h>
using namespace std;

const int mx = 10e5+123;
vector<int> adj[mx];
int lev[mx];

void bfs(int a){
	
	memset( lev, -1, sizeof(lev) );
	
	lev[a] = 0;
	queue<int> q;
	q.push(a);
	
	while( !q.empty() ){
		
		int x = q.front();
		q.pop();
		
		for( auto u: adj[x] ){
			if(lev[u] == -1){
				lev[u] = lev[x] + 1;
				q.push(u);
			}
		}
	}
}


int main(){
	
	int node, edge;
	cin >> node >> edge;
	
	while(edge--){
		int n1, n2;
		cin >> n1 >> n2;
		
		adj[n1].push_back(n2);
		adj[n2].push_back(n1);
	}
	
	bfs(1);
	
	for(int i=1; i<=node; i++){
		cout << i <<" : "<< lev[i] <<endl;
	}
	
}

/*

input:

7 7

1 2
1 3
2 7
1 4
4 5
1 6
3 6


output:

1 : 0
2 : 1
3 : 1
4 : 1
5 : 2
6 : 1
7 : 2

*/



