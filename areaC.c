#include<stdio.h>
#include<math.h>

int main()
{
    float r,area;
    printf("Enter the radius of circle\n");
    scanf("%f",&r);
    area=3.14*(r*r);
    printf("Area of circle is %0.2f\n",area);
    return 0;
}
