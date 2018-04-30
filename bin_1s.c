#include<stdio.h>
#include<string.h>
int main()
{	int i,error=0,count;
	char num[100];
	char com[100];
	printf("Enter the Binary number: ");
	scanf("%s",num);
	count = strlen(num);
	for(i=0;i<count;i++)
	{if(num[i]=='1'){
		com[i]='0';}
	else if(num[i]=='0'){
		com[i]='1';}
	else{
		printf("Error: ");
		return 1;}
	}
	com[count]='\0';
	printf("1's complement of given binary number is: %s\n",com);
	return 0;
}
		

