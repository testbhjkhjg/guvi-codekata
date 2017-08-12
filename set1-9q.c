#include <stdio.h>
int main()
{
    int sum=0,i,num;
    printf("Enter an number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    	sum=sum+i;
    }
    printf("sum of numbers %d",sum);
    return 0;
}
