#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch ((number > 0) - (number < 0)) {
        case 1:
            printf("%d is a positive number.\n", number);
            break;
        case -1:
            printf("%d is a negative number.\n", number);
            break;
        case 0:
            printf("%d is zero.\n", number);
            break;
    }

    return 0;
}
