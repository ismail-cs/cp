
// find out all divisors of a number
// useing harmony series

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;
vector<int> dv[mx];

int main(){
	
	int lim = 100;   // max = 1e6
	
	for(int i = 1; i <= lim; i++){
		for(int j = i; j <= lim; j += i){
			dv[j].push_back(i);
		}
	}
	
	
	for(int i=1; i<=lim; i++){
		
		cout << i <<" : ";
		for(auto u:dv[i]){
			cout << u <<" ";
		}
		cout <<endl;
	}
	
}
