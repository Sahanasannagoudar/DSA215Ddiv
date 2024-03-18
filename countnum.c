#include<stdio.h>
void countnum(int);
void main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    countnum(n);
}
void countnum(int n)
{
    int i=1;
    while(i<=n)
{
    printf("%d\n",i);
    i++;
}
}
