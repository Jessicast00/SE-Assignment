#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("%d adalah bilangan genap.\n", angka);
    } else {
        printf("%d adalah bilangan ganjil.\n", angka);
    }

    if (angka > 0) {
        printf("%d adalah bilangan positif.\n", angka);
    } else if (angka < 0) {
        printf("%d adalah bilangan negatif.\n", angka);
    } else {
        printf("Angka yang dimasukkan adalah nol.\n");
    }

    return 0;
}
