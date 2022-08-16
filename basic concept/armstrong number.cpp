
// armstrong number
// given number 371


// 3^3 + 7^3 + 1^3 == 371  {armstrong number}


#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int num,temp,r,sum=0;
	
	printf("enter a number : ");
	scanf("%d", &num);
	
	string str = to_string(num);
	int len = str.length();
	
	temp = num;	
	
	while(temp != 0){
		
		r = temp % 10;
		sum = sum + pow(r,len);
		temp = temp / 10;
	}
	
	if(sum == num)
	printf("armstrong number\n");
	
	else
	printf("not armstrong number\n");
}
