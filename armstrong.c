#include<stdio.h>
#include<stdio.h>
int main()
{
 int number,sum=0,r,temp,c;
 printf("Enter the number\n");
 scanf("%d",&number);
 temp=number;
 while(number>0)
 {
   r=number%10;
   c=r*r*r;
   sum=sum+c;
   number=number/10;
 }
 number=temp;
 if(number==sum)
 {
  printf("Armstrong number\n");
 }
 else
 {
  printf("Not Armstrong\n");
 }
return 0;
}
