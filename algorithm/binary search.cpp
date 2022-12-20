#include <bits/stdc++.h>
using namespace std;

int main()
{
			  //index  0  1  2  3  4  5   6   7   8   9   10
	vector<int> vec = {1, 2, 4, 5, 8, 10, 12, 23, 25, 36, 67};
					  
	
	sort( vec.begin(), vec.end() );
	
	int target; cin>>target;
	
	int start = 0, end = vec.size()-1; 
	
	while( start <= end ){
		
		int mid = ( start + end ) / 2;
		
		if ( target < vec[mid] ){
			end = mid - 1;
		} 
		else if ( target >  vec[mid] ){
			start = mid + 1;
		}
		else{
			end = start = mid;
			break;
		}
	}
	
	if ( end == start ){
		cout<<"yes \n"<<"index "<<end<<endl;
	}
	else{
		cout<<"no"<<endl;
	}

}
	

