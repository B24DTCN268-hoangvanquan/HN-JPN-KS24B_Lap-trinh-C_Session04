#include <stdio.h>

int main() {
    int month;
    printf("Nh�p v�o s� th�ng (1-12): ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Th�ng %d c� 31 ng�y.\n", month);
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Th�ng %d c� 30 ng�y.\n", month);
    } 
    else if (month == 2) {
        printf("Th�ng 2 c� 28 hoac 29 ng�y.\n");
    } 
    else {
        printf("S� th�ng kh�ng hop l?.\n");
    }

    return 0;
}

