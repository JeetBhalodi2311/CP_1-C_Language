#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("%d ", num % 10);
        num /= 10;
    } while (num > 0);
}