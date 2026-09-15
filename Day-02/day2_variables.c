#include <stdio.h>

int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &firstNumber, &secondNumber) != 2) {
        printf("Invalid input. Please enter two whole numbers.\n");
        return 1;
    }

    sum = firstNumber + secondNumber;

    printf("Sum: %d\n", sum);

    return 0;
}
