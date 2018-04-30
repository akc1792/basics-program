#include<stdio.h>
int main(){
	int num,prod,l;
	printf("Enter the number: ");
	scanf("%d",&num);
	l = num%10;
	while(num>10){
		num=num/10;
		     }
		
                prod=num+l;
		printf("Addition of first and last digits is : %d\n",prod);
return 0;
}
