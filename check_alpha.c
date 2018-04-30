#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	printf("Given leter is alphabet\n");
	else
        printf("Given leter is not alphabet\n");
return 0;
}
