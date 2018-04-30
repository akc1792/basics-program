#include<stdio.h>
int main(){
	int num,d,temp;
	int sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		sum=sum+(d*d*d);
		temp/=10;
	}
	if(sum==num)
	printf("%d this is a armstrong number\n",num);
	else
	printf("%d this is not a armstrong number\n",num);
return 0;
}

