#include <stdio.h>

int main() {
    int number;
    printf("Nhâp vao môt sô nguyên: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("Sô %d là sô duong.\n", number);
    } else if (number < 0) {
        printf("Sô %d là sô âm.\n", number);
    } else {
        printf("Sô nhâp vào là sô 0.\n");
    }

    return 0;
}

