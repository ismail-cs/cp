


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

int main(){
	
	int lim = 1e8;
	primeGen( lim );
	
	int size = primes.size();
	for(int i=0; i<size; i++){
		cout << primes[i] <<endl;
	}
	cout << size <<endl;

}

