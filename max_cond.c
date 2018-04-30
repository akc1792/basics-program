#include<stdio.h>
int main()
{ 
	int num1,num2,max;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	if(num1==num2){
	printf("Both are equal\n ");
	return 0;
			}
		max= (num1>num2) ? num1 : num2;
		printf("%d is maximum\n",max);
return 0;
}

