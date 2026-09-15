#include <stdio.h>

int main() {
    double firstNumber, secondNumber;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &firstNumber, &secondNumber) != 2) {
        printf("Invalid input. Please enter two numbers.\n");
        return 1;
    }

    printf("Sum: %.2lf\n", firstNumber + secondNumber);
    printf("Difference: %.2lf\n", firstNumber - secondNumber);
    printf("Product: %.2lf\n", firstNumber * secondNumber);

    if (secondNumber != 0) {
        printf("Quotient: %.2lf\n", firstNumber / secondNumber);
    } else {
        printf("Quotient: undefined (cannot divide by zero)\n");
    }

    return 0;
}
