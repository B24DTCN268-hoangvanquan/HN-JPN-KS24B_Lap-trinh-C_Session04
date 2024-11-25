#include <stdio.h>

int main() {
    int month;
    printf("Nhâp vào sô tháng (1-12): ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Tháng %d có 31 ngày.\n", month);
    } 
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Tháng %d có 30 ngày.\n", month);
    } 
    else if (month == 2) {
        printf("Tháng 2 có 28 hoac 29 ngày.\n");
    } 
    else {
        printf("Sô tháng không hop l?.\n");
    }

    return 0;
}

