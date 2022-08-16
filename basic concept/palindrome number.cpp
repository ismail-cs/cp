
// palindrome number
// given is 12321
// reverse  is 12321

// reverse == given   so palindrome

#include <bits/stdc++.h>

int main(){
	
	int num,temp,r,sum=0;
	
	printf("enter a number : ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp != 0){
		
		r = temp % 10;
		sum = sum * 10 + r;
		temp = temp / 10;
	}
	
	//printf("%d",sum)
	
	if(sum == num){
		printf("%d number is palindrome", num);
	}
	else
		printf("%d number is not palindrome", num);
	printf("\n");
} 
