#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
        if(n>0)
    {
        printf("Positive Number");
    }
    else if (n<0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("The Entered Number is ZERO");
    }

    return 0;
}

