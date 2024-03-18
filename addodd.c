//count even numbers
#include <stdio.h>

int main() {
    int array[100]; // Assuming maximum array size is 100
    int n,sum=0; // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("odd  numbers in the array: ");
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 != 0) {

            printf("%d ", array[i]);
        sum=sum+array[i];
        printf("\nsum of odd numbers %d",sum);
        }
    }

    return 0;
}
