#include <stdio.h>

int main() {
    float firstNumber, secondNumber;

    printf("Enter two numbers: ");
    if (scanf("%f %f", &firstNumber, &secondNumber) != 2) {
        printf("Invalid input. Please enter two numbers.\n");
        return 1;
    }

    printf("Sum: %.2f\n", firstNumber + secondNumber);
    printf("Difference: %.2f\n", firstNumber - secondNumber);
    printf("Product: %.2f\n", firstNumber * secondNumber);

    if (secondNumber != 0) {
        printf("Quotient: %.2f\n", firstNumber / secondNumber);
    } else {
        printf("Quotient: cannot divide by zero\n");
    }

    return 0;
}
