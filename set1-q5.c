#include <stdio.h>
int main()
{
    int a,b,c ;
    printf("Enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("The greatest number is A=%d \n", a);
    }
    else if(b>c)
    {
        printf("The greatest number is B=%d \n",b);
    }
    else
    {
        printf("The greatest number is c=%d\n",c);
    }

    
    return 0;
}
