#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ponteiroInteiro = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroChar = &caractere;

    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *ponteiroInteiro = 20;
    *ponteiroReal = 6.28;
    *ponteiroChar = 'B';

    printf("\nValores após a modificação usando ponteiros:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
