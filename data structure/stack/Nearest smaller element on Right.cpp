
//  Nearest smaller element on Right  (Using Stack)
//  4   2   1   5   6   3   4   2   2
//  2   1  -1   3   3   2   2  -1  -1

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	vector<int> v(n), ans;
	
	for(auto &u:v)  cin >> u;
	
	stack<int> st;
	st.push(-1);
	
	for(int i=n-1; i>=0; i--){
		if( st.top() < v[i] ){
			ans.push_back(st.top());
			st.push(v[i]);
		}
		else{
			while( st.top()  >=  v[i] ){
				st.pop();
			}
			ans.push_back(st.top());
			st.push(v[i]);
		}
	}
	reverse(ans.begin(), ans.end());
	
	for(auto u:ans) cout << u <<" ";
	cout <<endl;
}



/*

Input: 
4   2   1   5   6   3   4   2   2

Output:
2   1  -1   3   3   2   2  -1  -1

*/
