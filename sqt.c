#include <stdio.h>
#include <math.h>
int main () 
     {
    float x, result;
    printf("Enter a number\n");
    scanf("%f", &x);
    result = sqrt(x);
    printf("Square root of %f = %f\n", x, result);
    return 0;
    }
