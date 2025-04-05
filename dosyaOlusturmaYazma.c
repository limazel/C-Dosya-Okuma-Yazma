#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main() {
    char veri[VERI_BOYUTU];

    FILE *fPtr;

    fPtr = fopen("dosya.txt", "w+");

    if(fPtr == NULL) {
        printf("Dosya olusturulamadi. \n");
        exit(EXIT_FAILURE);
    }

    printf("Dosyaya kaydedilecek veriyi al : \n");
    fgets(veri, VERI_BOYUTU, stdin);

    fputs(veri, fPtr);

    fclose(fPtr);

    printf("Dosya yazma islemi tamamlandi. \n");

    return 0;
}