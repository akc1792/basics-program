//sum of n munbers
#include <stdio.h>
int main()
	{
		int n,i,num;
		int sum=0;
		printf("Enter the numbers of elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			sum=sum+num;
		}
		printf("The sum of numbers is %d\n" , sum);
		return 0;
	}
