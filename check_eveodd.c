#include<stdio.h>
int main()
{ 
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	switch(num%2)
		{
			case 0 :
				printf("Given number is even\n");
				break;
			case 1 :
				printf("Given number is odd\n");
				break;
			default :
				printf("Others\n");
				break

		}
return 0;
}
