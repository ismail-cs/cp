#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int x, vector<int> v){
	
	int i=0, j=n-1;
	
	int sum = 0;
	while(i < j){
    
		sum = v[i] + v[j];
		if(sum == x) return true;
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
		cout << "yes exists"<<endl;
	}
  	else{
		cout <<"not exists" <<endl;
	}
  
}


/*

input:   
5 9
1 2 3 4 5
  
output:
yes exists



input:   
5 10
1 2 3 4 5
  
output:
not exists

*/
