#include<stdio.h>
void main()
{
    int n,i,j;
    int count;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Perfect Numbers are: ");
    for(i=1; i<=n; i++)
    {
        count=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                count=j+count;
        }
        if(i==count)
            printf("%d " ,i);
    }
    printf("\n");
}
