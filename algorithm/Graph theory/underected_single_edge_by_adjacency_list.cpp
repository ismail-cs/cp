
// underected graph with single edge input by adjacency list


#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
vector <int> adj[mx];

int main(){
	
	int node, edge;   cin >> node >> edge;
	
	while(edge--){
		int a, b;   cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
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
         /       .	     |     \
        /      .             |      \
       /     .	             |       [4]
      /    .                 |      /
     /   .	             |     /
    /  .  	       	     |    /
   / .    	             |   /
  /.                         |  /
 [5]     		     | /
      		             |/
      		            [3]
      		
    
    
edge:
    		
  1  2
  1  5
  5  2
  2  3
  2  4
  3  4
 

Input:
5 6
1 2
1 5
5 2
2 3
2 4
3 4

Output:
1 : 2 5 
2 : 1 5 3 4 
3 : 2 4 
4 : 2 3 
5 : 1 2
    
*/
    
