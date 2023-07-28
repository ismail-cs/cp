
#include <bits/stdc++.h>
using namespace std;

const int mx = 30;

char arr[mx][mx];
int vist[mx][mx];

int w, h;

int cunt = 0;

int dx[] = {+1, -1,  0,  0};
int dy[] = { 0,  0, +1, -1};


void dfs(int x, int y){
	
	cunt++;
	
	vist[x][y] = 1;
	
	for(int i=0; i<4; i++){
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		
		if( x1 >= 0 and x1 < h and y1 >= 0 and y1 < w and vist[x1][y1] == 0 and arr[x1][y1] != '#' ){
			dfs(x1, y1);
		}
	}
	
}


int main(){
	
	int tc;  cin >> tc;
	for(int T=1; T<=tc; T++){
		
		for(int i=0; i<mx; i++){
			for(int j=0; j<mx; j++){
				vist[i][j] = 0;
			}
		}
		
		cunt = 0;
		
		cin >> w >> h;
		
		int start_x = 0, start_y = 0;
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin >> arr[i][j];
				if(arr[i][j] == '@') {
					start_x = i;
					start_y = j;
				}
			}
		}
		
		
		dfs(start_x, start_y);
		
		cout <<"Case "<< T <<": "<< cunt <<endl;
	}
}



