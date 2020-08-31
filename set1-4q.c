#include <stdio.h>
int main()
{
    char num;
    printf("Enter an character: ");
    scanf("%c",&num);

    if( (num>='a' && num<='z') || (num>='A' && num<='Z'))
        printf("%c Alphabet.",num);
    else
        printf("%c Not a Alphabet.",num);

    return 0;
}






