#include <stdio.h>

int main() {
    int number;
    printf("Nh�p vao m�t s� nguy�n: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d chia h�t cho ca 3 v� 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d chia h�t cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d chia h�t cho 5.\n", number);
    } else {
        printf("%d kh�ng chia h�t cho 3, 5 hoac ca hai.\n", number);
    }
    return 0;
}

