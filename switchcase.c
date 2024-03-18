#include<stdio.h>
main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    switch(x)
    {
        case 0:y=0;
        break;
        case 1:y=1;
        break;
        case 2:y=x*x+2*x+3;
        break;
        default:printf("invalid input for x\n");
        exit(0);
    }
    printf("y=%d",y);


}
