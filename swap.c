#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Swap : %d %d\n",n1,n2);
    return 0;
}
