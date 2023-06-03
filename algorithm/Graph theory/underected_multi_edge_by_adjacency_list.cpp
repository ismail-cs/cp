

// underected graph and multi edge input by adjacency list


#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
vector < pair < int, int> > adj[mx];

int main(){
	
	int node, edge;   cin >> node >> edge;
	
	while(edge--){
		int n1, n2, w;   cin >> n1 >> n2 >> w;
		adj[n1].push_back({n2, w});
		adj[n2].push_back({n1, w});
	}
	
	for(int i=1; i<=node; i++){
		cout << i <<" : ";
		for(auto u:adj[i]){
			cout <<"("<< u.first <<" "<<u.second<<")"<<" ";
		}
		cout <<endl;
	}
}


/*
 
                      3
               [1]----------[2].
              /	            .|\   .
             /            .  | \     . 3
            /           .    |  \     .
           /           .     |   \1    .
          /           .      |    \    .
       4 /           .       |     \   .
        /           .        |      \ .
       /      	  7 .      5 |       [4]
      /             .        |      
     /    	     .       |     
    /     	      .      |    
   /      	       .     |   
  /                      .   |  
 [5]     		  .  | 
      		            .|
      		            [3]
      		
    
    
  edge:
    		
  1  2  3
  1  5  4
  2  3  5
  2  3  7
  2  4  1
  2  4  3
    
        
Input:
5 6
1 2 3
1 5 4
2 3 5
2 3 7
2 4 1
2 4 3

Output:
1 : (2 3) (5 4) 
2 : (1 3) (3 5) (3 7) (4 1) (4 3) 
3 : (2 5) (2 7) 
4 : (2 1) (2 3) 
5 : (1 4)


*/
    
