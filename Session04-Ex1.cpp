#include <stdio.h>

int main() {
    int number;
    printf("Nh�p vao m�t s� nguy�n: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("S� %d l� s� duong.\n", number);
    } else if (number < 0) {
        printf("S� %d l� s� �m.\n", number);
    } else {
        printf("S� nh�p v�o l� s� 0.\n");
    }

    return 0;
}

