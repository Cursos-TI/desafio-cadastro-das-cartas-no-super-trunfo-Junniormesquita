#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada dos dados da carta 1
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo1);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nome1);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    while (getchar() != '\n'); // limpa o buffer

    // Entrada dos dados da carta 2
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite o codigo da carta (Ex: B02): ");
    scanf("%s", codigo2);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nome2);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    while (getchar() != '\n'); // limpa o buf

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    while (getchar() != '\n'); // limpa o buffer

    // Calculo densidade e PIB per capita da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Calculo densidade e PIB per capita da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // Exibindo dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    return 0;
}