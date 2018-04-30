//C program to print natural numbers in reverse order from N to 1

#include<stdio.h>
int main()
{
	int n,i;
	printf("from where : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
	printf("%d\n",i);}
	return 0;
}
