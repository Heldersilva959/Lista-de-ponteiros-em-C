#include <stdio.h>
#include <string.h>

void Cadastro() {
    char nome[50];
    char funcao[50];
    int numCapacitacoes;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua função na empresa: ");
    scanf("%s", funcao);

    printf("Quantas capacitações você realizou? ");
    scanf("%d", &numCapacitacoes);

    char capacitacoes[numCapacitacoes][21]; 

    for (int i = 0; i < numCapacitacoes; i++) {
        printf("Digite o nome da %da capacitação: ", i + 1);
        scanf("%s", capacitacoes[i]);
    }

    printf("\n--- Dados do Funcionário ---\n");
    printf("Nome: %s\n", nome);
    printf("Função: %s\n", funcao);
    printf("Capacitações:\n");
    for (int i = 0; i < numCapacitacoes; i++) {
        printf(" %d. %s\n", i + 1, capacitacoes[i]);
    }
}

int main() {
    Cadastro();
    return 0;
}
