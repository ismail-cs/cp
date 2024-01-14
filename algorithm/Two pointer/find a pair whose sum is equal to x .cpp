#include <bits/stdc++.h>
using namespace std;

int val1, val2;

bool solve(int n, int x, vector<int> v){
	
	int i=0, j=n-1;
	
	int sum = 0;
	while(i < j){
		
		sum = v[i] + v[j];
		if(sum == x) {
			val1 = v[i];
			val2 = v[j];
			return true;
		}
		else if(sum < x) i++;
		else j--; 
	} 
	return false;
}


int main() {
	
	int n, x; 
	cin >> n >> x;
	
	vector<int> v(n);
	
	for(auto &u : v){
		cin >> u;
	}
	
	sort(v.begin(), v.end());
	
	if(solve(n, x, v)){
		cout << "yes posible"<<endl;
		cout << val1 <<' '<< val2 <<endl;
	}else{
		cout <<"not posible" <<endl;
	}
}
