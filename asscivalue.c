#include<stdio.h>
main()
{
    char ch;
    printf("enter a character from the scanner");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("Capital letter\n");
    else if(ch>'a'&&ch<='z')
    printf("Small case letter\n");
    else if(ch>='0'&&ch<='9')
    printf("letter is a digit\n");
    else
    printf("Special symbol\n");
}
