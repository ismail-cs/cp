
// Problem solution "Histogram" lightoj 

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;  cin >> tc;
	for(int j=1; j<=tc; j++){
		
		int n; cin >> n;
		vector < pair < int, int > > vp;
		vector < int > arr1, arr2;
		
		for(int i=0; i<n; i++) {
			
			int a; cin >> a;
			vp.push_back ( {a, i} );
		}
		
		stack < pair < int, int > > st;   
		st.push ( {-1, -1} );
		
		for( int i=0; i<n; i++ ) {
			
			if( st.top().first < vp[i].first ) {
				
				arr1.push_back( st.top().second );
				st.push( {vp[i].first, vp[i].second} );
			}
			else{
				
				while( st.top().first >= vp[i].first ) {
					st.pop();
				}
				arr1.push_back(st.top().second);
				st.push( {vp[i].first, vp[i].second} );
			}
		}
		
		while(!st.empty()){
			st.pop();
		}
		
		st.push ( {-1, -1} );
		
		for(int i=n-1; i>=0; i--) {
			
			if( st.top().first < vp[i].first ) {
				
				if( st.top().second == -1 ) {
					arr2.push_back(n);
				}
				else {
					arr2.push_back(st.top().second);
				}
				st.push( {vp[i].first, vp[i].second} );
			}
			
			else{
				
				while( st.top().first >= vp[i].first ) {
					st.pop();
				}
				
				if( st.top().second == -1 ) {
					arr2.push_back(n);
				}
				else {
					arr2.push_back(st.top().second);
				}
				st.push( {vp[i].first, vp[i].second} );
			}
		}
		
		reverse( arr2.begin(), arr2.end() );
		
		int result = -1;
		
		for(int i=0; i<n; i++){
			int str = (arr2[i]-arr1[i]-1) * vp[i].first;
			result = max( result, str );
		}
		
		cout << "Case " << j << ": " << result <<endl;
	}
	
}
