#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
    	n=n/10;
        count++;
    }
   printf("%d is the digit length\n",count );
   
   return 0;
   } 

    