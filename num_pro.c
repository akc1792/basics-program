//Find Product of Digits of a Number


#include<stdio.h>
int main(){
	int num,d;
	int prod=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num>0){
	d=num%10;
	prod=prod*d;
	num=num-d;
	num/=10;
	}
		printf("Product is: %d\n",prod);
return 0;
} 
