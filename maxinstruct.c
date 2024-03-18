#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct computer_details
{
    char bname[10];
    float price;
    int mnum;
    int bytes;
}c;
void read(c*p,int n);
void display(c*p,int n);
void dis_hp(c*p,int n);
void display_max(c*p,int n);
main()
{   int n;
    c *p;
    printf("enter the no.of details to be entered");
    scanf("%d",&n);
    printf("enter bname:\tprice:\tmnum:\t bytes:\n");
    p=(c*)malloc(n*sizeof(p));
    if(p==NULL)
    {
        printf("memory not allocated");
        exit(0);}

 read(p,n);
 display(p,n);
 printf("enter the brand with hp");
 dis_hp(p,n);
 printf("enter the price max");
 display_max(p,n);
}
void read(c*p,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%s%f%d%d",(p+i)->bname,&(p+i)->price,&(p+i)->mnum,&(p+i)->bytes);
}

void display(c*p,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s\t%f\t%d\t%d\n",(p+i)->bname,(p+i)->price,(p+i)->mnum,(p+i)->bytes);
}
void dis_hp(c*p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp((p+i)->bname,"hp")==0)
                    printf("%s\t%f\t%d\t%d\n",(p+i)->bname,(p+i)->price,(p+i)->mnum,(p+i)->bytes);

    }
}
void display_max(c*p,int n)
{
    int i,m=0;
    int index;
    for(i=0;i<n;i++)
    {
        if(m>(p+i)->price)
       {

        m=(p+i)->price;
        i=index;}
                printf("%s\t%f\t%d\t%d\n",(p+index)->bname,(p+index)->price,(p+index)->mnum,(p+index)->bytes);}




}
