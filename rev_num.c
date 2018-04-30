#include<stdio.h>
int main(){
	int num,d;
	int rev=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		d=num%10;
		rev=d+rev*10;
		num/=10;
	}
	printf("Reverse is: %d\n",rev);
return 0;
}
		
