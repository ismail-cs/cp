
// sum of digits 
//  256  
//  2 + 5 + 6 = 13


#include <bits/stdc++.h>

int main(){
	
	int num,temp,sum=0,r;
	printf("enter a number : ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp != 0){
		
		r = temp % 10;
		sum = sum + r;
		temp = temp / 10;
	}
	
	printf("sum of digits is : %d\n", sum);
}
