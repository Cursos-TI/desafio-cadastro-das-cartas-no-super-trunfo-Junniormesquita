#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1600.0;
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Argentina";
    int populacao2 = 45195774;
    float area2 = 2780400.0;
    float pib2 = 500.0;
    int pontos2 = 18;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;

    float valor1_a, valor2_a; // valores do atributo 1
    float valor1_b, valor2_b; // valores do atributo 2
    float soma1, soma2;

    // Menu do primeiro atributo
    printf("\n===== SUPER TRUNFO DOS PAISES =====\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Menu do segundo atributo, retira o primeiro
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: prin
