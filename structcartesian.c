#include<stdio.h>
#include<math.h>
typedef struct point
{
    int a,b;
}pt;
void read(pt*p);
void display(pt*p);
void display_quadrant(pt*p);
void compute(pt*p1,pt*p2);
main()
{
    pt a,b;
    pt *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("enter a,b of p1\n");
    read(ptr1);
    printf("enter a,b of p2\n");
    read(ptr2);
    printf(" point 1\n");
    display(ptr1);
    printf("point 2\n");
    display(ptr2);
    printf("1st pt quadrant is\n");
    display_quadrant(ptr1);
    printf("2st pt quadrant is\n");
    display_quadrant(ptr2);
    compute(ptr1,ptr2);

}
void read(pt*p)
{
    scanf("%d%d",&p->a,&p->b);
}
void display(pt*p)
{
    printf("%d%d",p->a,p->b);
}
void display_quadrant(pt*p)
{
    if(p->a>0 && p->b>0)
        printf("quadrant 1\n");
    else if(p->a<0 && p->b>0)
        printf("quadrant 2\n");
        else if(p->a<0 && p->b<0)
        printf("quadrant 3\n");
        else if(p->a>0 && p->b>0)
        printf("quadrant 4\n");

}
void compute(pt*p1,pt*p2)
{
    float d,s;
    {d=sqrt((pow((p2->a-p1->b),2))+(pow((p2->a-p1->b),2)));}
    printf("distance between the two points=%f",d);
    s=(float)(p2->b-p1->b)/(p2->a-p1->a);
    printf("slope between the points=%f",s);

}
