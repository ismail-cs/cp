


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long power(ll base, ll pow, ll mod){
	
	int result = 1;
	
	while(pow){
		
		if(pow % 2 == 1){
			result = (result*base) % mod;
			pow--;
		}
		else{
			base = (base * base) % mod;
			pow /= 2;
		}
	}
	
	return result;
}

int main(){
	
	ll ans = power(2, 1000000, 1e9);
	
	cout << ans  <<endl;
}

