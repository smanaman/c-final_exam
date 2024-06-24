#include <stdio.h>

// Function to reverse a 3-digit number
int reverseNumber(int num) {
    int hundreds, tens, units, reversed;

    // Extract the hundreds, tens, and units place digits
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;

    // Reverse the digits
    reversed = (units * 100) + (tens * 10) + hundreds;

    return reversed;
}

int main() {
    int number, reversedNumber;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1; 
    }

    reversedNumber = reverseNumber(number);

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}
