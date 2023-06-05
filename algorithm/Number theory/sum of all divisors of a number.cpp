
// sum of a;; divisors of a number
// divisors of 15 is = 1, 3, 5, 15  so ans = 24

// using harmony series


#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
int sumOfDiv[mx];

int main(){
	
	int lim = 100;
	
	for(int i = 1; i <= lim; i++){
		for(int j = i; j <= lim; j += i){
			sumOfDiv[j] += i;
		}
	}
	
	
	cout << sumOfDiv[15] <<endl;
	cout << sumOfDiv[16] <<endl;
	cout << sumOfDiv[17] <<endl;
	
}
