//C program to print even numbers between 1 to N using for and while loop

#include<stdio.h>
int main()
{
	int n,i;
	printf("Till where : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(i%2==0)
	printf("%d\n",i);}
	return 0;
}
