#include <stdio.h>

int main() {
    float firstNumber, secondNumber, thirdNumber;
    float largest;

    printf("Enter three numbers: ");
    if (scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (firstNumber >= secondNumber && firstNumber >= thirdNumber) {
        largest = firstNumber;
    } else if (secondNumber >= firstNumber && secondNumber >= thirdNumber) {
        largest = secondNumber;
    } else {
        largest = thirdNumber;
    }

    printf("The largest number is: %.2f\n", largest);

    return 0;
}
