#include <stdio.h>

int main() {
    double firstNumber, secondNumber;
    char operator;

    printf("Enter an expression (example: 10 + 5): ");
    if (scanf("%lf %c %lf", &firstNumber, &operator, &secondNumber) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", firstNumber + secondNumber);
            break;
        case '-':
            printf("Result: %.2lf\n", firstNumber - secondNumber);
            break;
        case '*':
            printf("Result: %.2lf\n", firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber == 0) {
                printf("Error: cannot divide by zero.\n");
                return 1;
            }
            printf("Result: %.2lf\n", firstNumber / secondNumber);
            break;
        default:
            printf("Invalid operator. Use +, -, *, or /.\n");
            return 1;
    }

    return 0;
}
