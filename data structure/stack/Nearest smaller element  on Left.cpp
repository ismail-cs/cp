
// Nearest smaller element  on Left  (Using Stack)
//  4,  2,  1,  5,  6,  3,  4,  2,  2
//  -1  -1  -1  1   5   1   3   1   1

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	vector<int> v(n), ans;
	
	for(auto &u:v)  cin >> u;
	
	stack<int> st;
	st.push(-1);
	
	for(auto u:v){
		if(st.top() < u){
			ans.push_back(st.top());
			st.push(u);
		}
		else{
			while(st.top() >= u){
				st.pop();
			}
			ans.push_back(st.top());
			st.push(u);
		}
	}

	for(auto u:ans) cout << u <<" ";
	cout <<endl;
}


/*

Input: 

4    2    1    5   6   3   4   2   2

Output:
-1   -1   -1   1   5   1   3   1   1 

*/
