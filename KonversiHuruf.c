/*Program Konversi huruf besar menjadi huruf kecil*/
#include <stdio.h>

main() {
    char karakter_besar, karakter_kecil;
    printf("Program Konversi huruf besar menjadi huruf kecil\n");
    printf("Masukkan sebuah huruf besar : ");
    scanf("%c", &karakter_besar);
    karakter_kecil = karakter_besar + 32;
    printf("Huruf kecil : %c \n", karakter_kecil);
    return 0;
}
