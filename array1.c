#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void read(int A[12],int n);
void print(int A[12],int n);
void moneyspent(int A[12],int n);
void moreexp(int A[12],int n);
main()
{int A[12],n;
printf("enter number of months\n");
 scanf("%d",&n);
 if(n<=0 && n>12)
 {
printf("invalid input");
 exit(0);
 }
 read( A,n);
 print( A,n);
moneyspent( A[12],n);
}

void read(int A[12],int n)
{int i;
for(i=0;i<n;i++)
 {printf("expediture is\t");
scanf("%d",&A[i]);
}
}
void print(int A[12],int n)
{int i;
for(i=0;i<n;i++)
printf("%d\n",A[i]);
}
void moneyspent(int A[12],int n)
{int i,tspent=0,aspent;
for(i=0;i<n;i++)
{
    tspent=tspent+A[i];
}
aspent=tspent/12;
printf("tspent=%d\n",tspent);
printf("aspent=%d\n",aspent);

}
void moreexp(int A[12],int n)
{
    int l=A[0],i;
    for(i=1;i<n;i++)
    {
        if(A[i]>l)
            l=A[i];
    }
    printf("largest=%d\n",A[i]);



}
