

//  prime factorization


#include <bits/stdc++.h>
using namespace std;

const int mx=1e8;
bitset<mx> isPrime;
vector<int> primes;

void primeGen( int n ){
	
	for(int i=3; i<=n; i+=2) isPrime[i] = 1;
	
	int sq = sqrt(n);
	for(int i = 3; i <= sq; i+=2){
		if (isPrime[i]){
			for( int j=i*i; j<=n; j+=i){
				isPrime[j] = 0;
			}
		}
	}
	isPrime[2] = 1;
	
	primes.push_back(2);
	for(int i=3; i<=n; i+=2){
		if(isPrime[i] == 1){
			primes.push_back(i);
		}
	}
}

//primes[] = {2, 3, 5, 7, 11, 13, ............}


vector<int> primeFactors (int n) {
	
	vector<int> factors;
	
	for(auto p:primes){
		
		if( 1LL * p * p > n) break;
		
		if( n % p == 0 ){
			while( n % p == 0 ){
				factors.push_back(p);
				n /= p;
			}
		}
	}
	
	if(n > 1){
		factors.push_back(n);
	}
	
	return factors;
}


int main(){
	
	int lim = 1e7;
	primeGen( lim );
	
	vector<int> factors = primeFactors(40131);
	
	for(auto u:factors){
		
		cout << u <<" ";
	}
	cout <<endl;
}
