#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	printf("Given leter is alphabet\n");
	else if(ch>='0' && ch<='9') 
        printf("Given character is number\n");
	else
	printf("Given character is neither number nor alphabet\n");
return 0;
}
