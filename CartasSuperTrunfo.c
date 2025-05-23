#include <stdio.h>

int main() {
    // ===== Dados da Carta 1 =====
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // ===== Dados da Carta 2 =====
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // ===== Entrada dos dados da Carta 1 =====
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n');

    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo1);
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nome1);
    while (getchar() != '\n');

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n');

    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    while (getchar() != '\n');

    // ===== Entrada dos dados da Carta 2 =====
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n');

    printf("Digite o codigo da carta (Ex: B02): ");
    scanf("%s", codigo2);
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nome2);
    while (getchar() != '\n');

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    while (getchar() != '\n');

    // ===== Cálculo da Densidade e PIB per Capita =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== Comparação por População =====
    printf("\n--- Comparacao de Cartas (Atributo: Populacao) ---\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
