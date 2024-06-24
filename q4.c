#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    printf("The squares of the elements in the array are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");

    return 0;
}
