#include <bits/stdc++.h>
using namespace std;

int main()
{
	          //index  0  1  2  3  4  5   6   7   8   9   10
	vector<int> vec = {1, 2, 4, 5, 8, 10, 12, 23, 25, 36, 67};
					  
	
	sort( vec.begin(), vec.end() );
	
	int target; cin>>target;
	int ans = -1;
	int l = 0, r = vec.size()-1; 
	
	while( l <= r ){
		
		int mid = ( l + r ) / 2;
		
		if( vec[mid] == target ){
			ans = mid;
			break;
		}
		if ( target < vec[mid] ){
			r = mid - 1;
		} 
		else if ( target >  vec[mid] ){
			l = mid + 1;
		}
	}
	
	if ( ans != -1 ){
		cout <<"yes. index : "<< ans << endl;
	}
	else{
		cout <<"no" <<endl;
	}
}

