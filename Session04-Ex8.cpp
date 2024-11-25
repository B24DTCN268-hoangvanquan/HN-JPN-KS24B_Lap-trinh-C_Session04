#include <stdio.h>
int main() {
    float a, b, c;
    printf("Nhap vào canh a: ");
    scanf("%f", &a);

    printf("Nhâp vào canh b: ");
    scanf("%f", &b);

    printf("Nhâp vào canh c: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 canh tam giác.\n");
    } else {
        printf("Không phai 3 canh tam giác.\n");
    }
    return 0;
}

