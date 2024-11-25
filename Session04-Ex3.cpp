#include <stdio.h>

int main() {
    int number;
    printf("Nhâp vao môt sô nguyên: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d chia hêt cho ca 3 và 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d chia hêt cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d chia hêt cho 5.\n", number);
    } else {
        printf("%d không chia hêt cho 3, 5 hoac ca hai.\n", number);
    }
    return 0;
}

