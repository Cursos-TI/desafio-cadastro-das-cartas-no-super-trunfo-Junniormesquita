#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char nome1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1600.0; // Em bilhões de dólares
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char nome2[50] = "Argentina";
    int populacao2 = 45195774;
    float area2 = 2780400.0;
    float pib2 = 500.0; // Em bilhões de dólares
    int pontos2 = 18;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("\n===== SUPER TRUNFO DOS PAISES =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s\n", nome1, nome2);

    switch (opcao) {
        case 1: // População
            printf("\nPopulacao:\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nArea (km2):\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nPIB (em bilhoes de dolares):\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nPontos Turisticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("\nDensidade Demografica (habitantes por km2):\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);

            if (densidade1 < densidade2) { // MENOR vence
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
    }

    return 0;
}
