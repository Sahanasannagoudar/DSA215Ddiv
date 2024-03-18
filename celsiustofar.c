#include<stdio.h>
main()
{
    float F,C;
    printf("enter the temperature in F\n");
    scanf("%f",&F);
    C=(5/9.0*(F-32));

    if(C<0)
        printf("freezing\n");
    else if(0<=C&&C<10)
        printf("very cold\n");
    else if(10<=C&&C<20)
        printf("cold\n");
    else if(20<=C&&C<30)
        printf("normal\n");
    else if(30<=C&&C<40)
        printf("hot\n");
    else if(C>=40)
        printf("very hot\n");
    else
        printf("error in temperature");




}
