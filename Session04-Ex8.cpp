#include <stdio.h>
int main() {
    float a, b, c;
    printf("Nhap v�o canh a: ");
    scanf("%f", &a);

    printf("Nh�p v�o canh b: ");
    scanf("%f", &b);

    printf("Nh�p v�o canh c: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("L� 3 canh tam gi�c.\n");
    } else {
        printf("Kh�ng phai 3 canh tam gi�c.\n");
    }
    return 0;
}

