#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid! Enter positive digit"); 
        return 0;
    }

    printf("The sum of the digits is: %d\n", sumOfDigits(num));

    return 0;
}