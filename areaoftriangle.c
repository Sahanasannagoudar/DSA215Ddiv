//c program to compute area of the triangle
#include <stdio.h>
#include <math.h>
main()
{
    int a,b,c;
    float s,area;
    printf("enter the three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle=%f",area);

}
