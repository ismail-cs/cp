
// find number of divisors of all numbers 1 to N
// how many divisors of a number 


#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7+123;
int cnt[mx];

int main(){
	
	
	int lim=100;
	
	// O( n ln(n) ) time complexity
	for(int i=1; i<=lim; i++){
		for(int j=i; j<=lim; j+=i){
			cnt[j]++;
		}
	}
	
	
	for(int i=1; i<lim; i++){
		cout << i << ":" << cnt[i] <<endl;
	}
	
}
