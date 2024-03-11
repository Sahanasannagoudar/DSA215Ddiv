//C program to multiply 7 n times
#include<stdio.h>

//fn prototype
int product_of_numbers(int n);

int main()
{
    int n,product;
    printf("Enter how many times 7 should be multiplied\n");
    scanf("%d",&n);
    //function call
    product=product_of_numbers(n);

    return 0;
}

//fun defition
int product_of_numbers(int n)
{
    int i,product=1;
    for(i=0;i<n;i++)
    {
        product=product*7;

    }
    printf("Product is %d",product);
    return product;
}
