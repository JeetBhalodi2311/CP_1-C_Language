#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0)
        printf("Positive");
    else
        printf("Negative");
}