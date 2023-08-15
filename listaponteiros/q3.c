#include <stdio.h>

int main() {
    int tamanhoArray = 5;
    int array[tamanhoArray];

    printf("Digite %d valores inteiros:\n", tamanhoArray);
    for (int i = 0; i < tamanhoArray; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%d ", *(array + i) * 2);
    }
    printf("\n");

    return 0;
}
