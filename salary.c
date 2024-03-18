#include<stdio.h>
main()
{
    float bonus,sal,grosssal;
    char gender;
    printf("enter the sal and gender");
    scanf("%f %c",&sal,&gender);
    if(sal<10000)
    {
        if(gender=='M')
            bonus=sal*0.07;
        else if(gender=='F')
            bonus=sal*0.12;
        else
        {
            printf("invalid input for gender\n");
            exit(0);
        }
    }
    grosssal=sal+bonus;
    printf("bonus=%f\n,salary=%f\n",bonus,grosssal);

}
