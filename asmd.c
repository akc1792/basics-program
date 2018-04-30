#include<stdio.h>
int main()
	{ 
    	int a, b, sum,diff,mul; 
	float div;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=(float)a/b;
		printf("Sum of two given number is : %d\n",sum);
		printf("Difference of two given number is : %d\n",diff);
		printf("Multiply of two given number is : %d\n",mul);
		printf("Divide of two given number is : %f\n",div);
return 0;
}
