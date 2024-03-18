#include<stdio.h>
#include<stdlib.h>
main()
{
    int units;
    float bill;
    printf("enter the no of units\n");
    scanf("%d",units);
    if(unit>0 && unit<=50)
        bill=units*3.5;
    else if(units>50 && units<=150)
        bills=50*3.5+(units-50)*4;
    else if(units>150 && units<=250)
        bills=50*3.5+100*4+(units-100)*5.20;
    else if(units>250)
        bills=50*3.5+100*4+150*5.20+(unit-250)*6.5;
    else{
        printf("invalid units consumed\n")
    exit(0)
    }
            printf("total bill to be paid=%f\n",bills);

}
