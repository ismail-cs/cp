

//  DFS recursion function

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
	
	dfs(1);
	
}




/*
  
 
                            (1)
               	            / \
                           /   \
                          /     \
                         /       \
                        /         \
                       /           \
                      /             \
                    (2)             (4)
                    /               / \
         	   /               /   \
                  /	          /     \
         	 /               /       \
                /               /         \
              (5)             (3)        (6)
      		                   
      		                
      		
edge :
  		
  1  2
  1  4
  2  5
  4  3
  4  6
  

*/
    
