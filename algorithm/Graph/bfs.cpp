
// bfs implementation


#include <bits/stdc++.h>
using namespace std;

const int mx = 10e5+123;
vector<int> adj[mx];
int lev[mx];

void bfs(int s){
	
	memset( lev, -1, sizeof(lev) );
	
	lev[s] = 0;
	queue<int> qe;
	qe.push(s);
	
	while( !qe.empty() ){
		
		int a = qe.front();
		qe.pop();
		
		for( auto u: adj[a] ){
			if(lev[u] == -1){
				lev[u] = lev[a] + 1;
				qe.push(u);
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
	
	for(int i=1; i<=7; i++){
		cout << lev[i] <<endl;
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

0
1
1
1
2
1
2

*/



