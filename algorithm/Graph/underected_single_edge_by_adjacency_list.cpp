
// underected graph with single edge input by adjacency list


#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
vector <int> adj[mx];

int main(){
	
	int node, edge;   cin >> node >> edge;
	
	while(edge--){
		int n1, n2;   cin >> n1 >> n2;
		adj[n1].push_back(n2);
		adj[n2].push_back(n1);
	}
	
	for(int i=1; i<=node; i++){
		cout << i <<" : ";
		for(auto u:adj[i]){
			cout << u <<" ";
		}
		cout <<endl;
	}
}




/*
 
               [1]----------[2]
              /	           . |\
             /           .   | \
            /          .     |  \
           /         .       |   \
          /        .         |    \
         /       .	         |     \
        /      .             |      \
       /     .	             |       [4]
      /    .                 |      /
     /   .	                 |     /
    /  .  	       	         |    /
   / .    	                 |   /
  /.                         |  /
 [5]     		                 | /
      		                   |/
      		                  [3]
      		
    
    
edge:
    		
  1  2
  1  5
  5  2
  2  3
  2  4
  3  4
    
    
*/
    
