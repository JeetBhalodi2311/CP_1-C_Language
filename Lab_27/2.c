#include <stdio.h>

void main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Characters in the string:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}