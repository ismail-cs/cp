

// insertion sort
// time complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	vector<int> v(n);
	
	for(auto &u:v) cin >> u;
	
	for(int i=1; i<n; i++){
		for(int j=i; j>=1; j--){
			if(v[j] < v[j-1]){
				swap(v[j], v[j-1]);
			}
			else break;
		}
	}
	
	for(auto u:v) cout <<u <<" ";
	cout <<endl;
}
