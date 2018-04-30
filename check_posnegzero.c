#include<stdio.h>
int main()
{
        int num;
  	printf("Enter the number: ");
  	scanf("%d",&num);
	if(num==0)
	printf("Given number is zero\n");
	else if(num>0)
	printf("Given number is positive\n");
	else
	printf("Given number is negative\n");
return 0;
}
