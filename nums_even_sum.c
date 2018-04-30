// find sum of all even numbers between 1 to N using for loop

#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("Till where : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	if(i%2==0){
	sum=sum+i;}}
	printf("%d\n",sum);
	return 0;
}
