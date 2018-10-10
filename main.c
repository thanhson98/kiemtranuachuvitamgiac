#include <stdio.h>
#include <stdlib.h>

int a, b, c;

int nuachuvitamgiac(int a, int b, int c) {
    if (a == 0) {
        printf("canh tam giac lon hon bang 0");
        exit(1);
    }
    if (b == 0) {
        printf("canh tam giac lon hon bang 0");
        exit(1);
    }
    if (c == 0) {
        printf("canh tam giac lon hon bang 0");
        exit(1);
    }
    if ((a + b) <= c) {
        printf("tong hai canh cua tam giac luon lon hon canh con lai");
        exit(1);
    }
    return (a + b + c) / 2;
}

int main() {
    printf("nhap canh thu nhat");
    scanf("%d", &a);
    printf("nhap canh thu hai");
    scanf("%d", &b);
    printf("nhap canh thu ba");
    scanf("%d", &c);
    printf("nua chu vi cua tam giac la %d", nuachuvitamgiac(a, b, c));


    return 0;
}