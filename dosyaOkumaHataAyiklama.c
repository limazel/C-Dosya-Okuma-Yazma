#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fPtr;
    char karakter;

    fPtr = fopen("dosya.txt", "r");
    if(fPtr == NULL) {
        printf("Dosya okunamadi.\n");
        printf("Dosyanin ilgili konumda olup olmadigini ve de erisim yetnizi kontrol edin.\n");
        exit(EXIT_FAILURE);
    }

    printf("Dosya basariyla acildi. Icerik okunuyor.\n");

    do
    {
        karakter = fgetc(fPtr);

        putchar(karakter);
    } while (karakter != EOF);
    fclose(fPtr);

}