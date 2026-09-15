#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a whole year.\n");
        return 1;
    }

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
