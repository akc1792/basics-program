#include<stdio.h>
int main()
	{ 
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        	printf("Given character is vowels\n");
	else
		printf("Given character is consonant\n");
return 0;
	}
