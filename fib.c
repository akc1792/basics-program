#include<stdio.h>
int main()
{       int term;
	int a=0;
	int b=1;
	int c=0;
	printf("Enter the number of terms: ");
	scanf("%d",&term);
	printf("Here the series of fibonacci: ");
	for(int i=0;i<term;i++)
	{ 
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
printf("\n");
return 0;
}	
		
