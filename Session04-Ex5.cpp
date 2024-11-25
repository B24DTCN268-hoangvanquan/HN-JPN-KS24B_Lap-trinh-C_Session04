#include <stdio.h>

int main() {
    int number1, number2, number3;
    printf("Nhâp vào sô thu nhât: ");
    scanf("%d", &number1);
    printf("Nhâp vào sô thu hai: ");
    scanf("%d", &number2);
    printf("Nhâp vào sô thu ba: ");
    scanf("%d", &number3);
    if ((number3 > number1 && number3 < number2) || (number3 > number2 && number3 < number1)) {
        printf("Sô thu ba %d nam trong khoang giua sô thu hai %d và sô thu nhât %d.\n", number3, number2, number1);
    } else {
        printf("Sô thu ba %d không nam trong khoang giua sô thu hai %d và sô thu nhât %d.\n", number3, number2, number1);
    }
    return 0;
}

