#include <stdio.h>

int main() {
    int number;
    printf("Nh�p vao m�t s� nguy�n: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d l� s� chan.\n", number);
    } else {
        printf("%d l� s� le.\n", number);
    }

    return 0;
}

