#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada dos dados da carta 1
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
    scanf("%lu", &populacao1);
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

    // Entrada dos dados da carta 2
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
    scanf("%lu", &populacao2);
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

    // Calculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // Calculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações
    int vPop = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPib = pib1 > pib2;
    int vPontos = pontos1 > pontos2;
    int vDensidade = densidade1 < densidade2; // menor vence na densidade
    int vPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    // Resultados das Comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", vPop ? 1 : 2, vPop);
    printf("Area: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n", vPib ? 1 : 2, vPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vPontos ? 1 : 2, vPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPibPerCapita ? 1 : 2, vPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);

    return 0;
}
