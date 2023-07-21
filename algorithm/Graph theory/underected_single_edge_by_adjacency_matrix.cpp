

// underected graph with single edge input by adjacency matrix


#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int node, edge;   cin >> node >> edge;
	
	int adj[node+5][node+5];
	memset(adj, 0, sizeof(adj));
	
	while(edge--){
		int n1, n2;   cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}
	
	for(int i=1; i<=node; i++){
		for(int j=1; j<=node; j++){
			cout << adj[i][j] <<' ';
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


    |  1   2   3   4   5
  ------------------------
  1 |  0   1   0   0   1 
    |
  2 |  1   0   1   1   1
    |
  3 |  0   1   0   1   0
    | 
  4 |  0   1   1   0   0
    |
  5 |  1   1   0   0   0
   

Input:
5 6
1 2
1 5
5 2
2 3
2 4
3 4

Output:
0 1 0 0 1 
1 0 1 1 1 
0 1 0 1 0 
0 1 1 0 0 
1 1 0 0 0

*/
    
