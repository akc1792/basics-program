#include<stdio.h>
int main()
{
	int a,b,c;
  	printf("Enter the three numbers: ");
  	scanf("%d %d %d",&a,&b,&c);
        if(a>c)
        {	if(a>b)
             	printf("%d is largest\n",a);
		else
		printf("%d is largest\n",b);
	}
	else
		{	if(b>c)
			printf("%d is largest\n",b);
			else
			printf("%d is largest\n",c);
		}
return 0;
}

