#include<stdio.h>
int main()
{
	int s1,s2,s3;
  	printf("Enter the three sides of triangle: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1))
		 printf("This is a triangle\n");
	else
		 printf("This is not a triangle\n");
return 0;
}
