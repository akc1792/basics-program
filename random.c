#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n, random;
    //printf("Enter number of random numbers\n");
    //scanf("%d", &n);
 
    /* print n random numbers using rand function */
  //  printf("%d random numbers between 0 to 1000\n", n);
    //while(n--){
        random = rand();
        printf("%d\n", random);
    
     
   
    return 0;
}
