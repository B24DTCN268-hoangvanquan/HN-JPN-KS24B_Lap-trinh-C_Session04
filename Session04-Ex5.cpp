#include <stdio.h>

int main() {
    int number1, number2, number3;
    printf("Nh�p v�o s� thu nh�t: ");
    scanf("%d", &number1);
    printf("Nh�p v�o s� thu hai: ");
    scanf("%d", &number2);
    printf("Nh�p v�o s� thu ba: ");
    scanf("%d", &number3);
    if ((number3 > number1 && number3 < number2) || (number3 > number2 && number3 < number1)) {
        printf("S� thu ba %d nam trong khoang giua s� thu hai %d v� s� thu nh�t %d.\n", number3, number2, number1);
    } else {
        printf("S� thu ba %d kh�ng nam trong khoang giua s� thu hai %d v� s� thu nh�t %d.\n", number3, number2, number1);
    }
    return 0;
}

