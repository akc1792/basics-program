//2's complement

#include<stdio.h>
#include<string.h>
int main()
{	int i,error=0,count,carry=1;
	char num[100];
	char com[100];
	char twoscom[100];
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
	
        for(i=count-1; i >= 0; i--) {  
        if(com[i]=='1' && carry==1){
            twoscom[i] = '0';  
        } else if(com[i]=='0' && carry==1) {  
            twoscom[i] = '1';  
            carry = 0;  
        } else {  
            twoscom[i] = com[i];  
        }  
    }  
    twoscom[count] = '\0'; 
       
    printf("Two's Complement : %s\n",twoscom);  
   
    return 0;  
} 
