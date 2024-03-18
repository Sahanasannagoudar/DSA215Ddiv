#include<stdio.h>
 typedef struct
{
    char name[25];
    int age;
}PLAYER;
   void read (PLAYER a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%s %d",a[i].name,&a[i].age);
    return;
}
void display (PLAYER a[100],int n)
{
  int i;
  printf("The entered details is \n");
    for(i=0;i<n;i++)
    {
        printf("%s %d",a[i].name,a[i].age);
        printf("\n");
    }
    return;
}
int findsum (PLAYER a[100],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
            s=a[i].age+s;
    }
    return s;
}
int main()
{
    PLAYER a[100];
    int n,num;
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("Enter the name and age \n");
    read(a,n);
    display(a,n);
    num=findsum(a,n);
    printf("The minimum age is %d",num);
    return 0;

}
