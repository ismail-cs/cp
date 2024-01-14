#include <bits/stdc++.h>
using namespace std;

void solve(int n, int x, vector<int> v){
	
	int i=0, j=n-1;
	int val1=0, val2=0;
	
	int sum = 0, dif = 1e9;
	while(i < j){
		
		sum = v[i] + v[j];
		
		if(dif > abs(sum-x)){
			dif = abs(sum-x);
			val1 = v[i];
			val2 = v[j];
		}
		
		if(sum < x) i++;
		else if(sum > x) j--;
	} 
	
	cout << val1 <<" "<< val2 <<endl;
}


int main() {
	
	int n, x; 
	cin >> n >> x;
	
	vector<int> v(n);
	
	for(auto &u : v){
		cin >> u;
	}
	
	sort(v.begin(), v.end());
	
	solve(n, x, v);

}


/*

input:
5 15
1 4 10 7 3

output:
4 10



input:
5 16
1 4 10 7 3

output:
7 10

*/
