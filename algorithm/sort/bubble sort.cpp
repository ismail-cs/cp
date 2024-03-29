
// Bubble sort
// Time complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	vector<int> v(n);
	
	for(auto &u:v) cin >> u;
	
	for(int i=0; i<n; i++){
		
		bool is_sorted = true;
		for(int j=0; j<n-i-1; j++){
			if( v[j] > v[j+1]){
				swap(v[j], v[j+1]);
				is_sorted = false;
			}
		}
		if(is_sorted) break;
	}
	
	for(auto u:v) cout <<u <<" ";
	cout <<endl;
}

/*

Input:
6
2 3 1 4 2 1

Output:
1 1 2 2 3 4

*/

