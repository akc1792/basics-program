/*#include<stdio.h>

typedef struct complex
	{
	int realpart;
	int imgpart;
		}complexnumber;

int main(){
	int complexnumber cmplxf, cmplxs, sum;
	printf("Enter two complex numbers: ");
	scanf("%d %d",&cmplxf.realpart, &cmplxf.imgpart);
	scanf("%d %d",&cmplxs.realpart, &cmplxs.imgpart);
	sum.realpart= cmplxf.realpart + cmplxs.realpart;
	sum.imgpart= cmplxf.imgpart + cmplxs.imgpart;
	printf("Sum of two complex numbers: %d + i %d\n",sum.realpart , sum.imgpart);
	return 0;
	}
*/
	
#include <stdio.h>

typedef struct complex
{
   int realPart;
   int imaginaryPart;
} complexNumber;
  
int main()
{
   complexNumber firstCN, secondCN, sumCN;
   printf("Enter two complex numbers: \n");
   scanf("%d %d", &firstCN.realPart, &firstCN.imaginaryPart);
   scanf("%d %d", &secondCN.realPart, &secondCN.imaginaryPart);
   sumCN.realPart = firstCN.realPart + secondCN.realPart;
   sumCN.imaginaryPart = firstCN.imaginaryPart + secondCN.imaginaryPart;
   printf("SUM = %d + %di\n", sumCN.realPart, sumCN.imaginaryPart);

    
   
   return 0;
}
