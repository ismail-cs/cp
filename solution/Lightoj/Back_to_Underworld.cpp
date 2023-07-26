

#include <bits/stdc++.h>
using namespace std;


const int mx = 2e4+123;
int isNode[mx];
int vist[mx];
vector<int> adj[mx];
int cunt, cunt1;


void dfs(int n, int col){
	
	vist[n] = 1;
	
	cunt++;
	
	if(col == 1) cunt1++;
	
	int tmp;
	if(col == 1) tmp = 2;
	else tmp = 1;
	
	for(auto u:adj[n]){
		if(vist[u] == 0){
			dfs(u, tmp);
		}
	}
}


int main(){
	
	
	int tc;  cin >> tc;
	
	for(int T=1; T<=tc; T++){
		
		for(int i=0; i<mx; i++){
			isNode[i] = 0;
			vist[i] = 0;
			adj[i].clear();
		}
		
		int edge;  cin >> edge;
		
		while(edge--){
			
			int n1, n2;
			cin >> n1 >> n2;
			
			adj[n1].push_back(n2);
			adj[n2].push_back(n1);
			
			isNode[n1] = 1;
			isNode[n2] = 1;
		}
		
		int ans = 0;
		
		for(int i=1; i<= 2e4; i++){
			
			cunt = 0;
			cunt1 = 0;
			
			
			if(isNode[i] == 1 and vist[i] == 0){
				
				
				dfs(i, 1);
			
				ans += max(cunt1, cunt-cunt1);
			}
			
			
		}
		
		cout << "Case "<< T <<": "<< ans <<endl; 
		
	}
	
}

