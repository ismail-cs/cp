
// reverse number

#include <bits/stdc++.h>

int main(){
	
	int num,sum=0,r,temp;
	
	printf("enter a numbe : ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp != 0){
		r = temp % 10;
		sum = sum * 10 + r;
		temp = temp / 10;
	}
	
	printf("reverse number is : %d\n", sum);
}

// input: 473
// output: 374
