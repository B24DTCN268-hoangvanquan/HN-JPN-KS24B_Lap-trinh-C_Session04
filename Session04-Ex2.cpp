#include <stdio.h>

int main() {
    int number;
    printf("Nhâp vao môt sô nguyên: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d là sô chan.\n", number);
    } else {
        printf("%d là sô le.\n", number);
    }

    return 0;
}

