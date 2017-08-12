#include <stdio.h>
int main()
{
    int a,i,j=0 ;
    printf("Enter the numbers\n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
    	j=j+i;
    }
    printf("The sum of natural numbers %d",j);
    return 0;
}
