#include <stdio.h>
#include <string.h>

// Definindo estrutura para a carta
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para calcular densidade e PIB per capita
void calcularIndicadores(Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
}

// Função para calcular o Super Poder
void calcularSuperPoder(Carta *c) {
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos + c->pibPerCapita + (1.0 / c->densidade);
}

// Função para cadastrar uma carta
void cadastrarCarta(Carta *c) {
    printf("\nCadastro da Carta:\n");

    printf("Estado: ");
    fgets(c->estado, sizeof(c->estado), stdin);
    c->estado[strcspn(c->estado, "\n")] = 0;

    printf("Codigo da carta: ");
    fgets(c->codigo, sizeof(c->codigo), stdin);
    c->codigo[strcspn(c->codigo, "\n")] = 0;

    printf("Nome do pais: ");
    fgets(c->nome, sizeof(c->nome), stdin);
    c->nome[strcspn(c->nome, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &c->populacao);
    while(getchar() != '\n');

    printf("Area (km²): ");
    scanf("%f", &c->area);
    while(getchar() != '\n');

    printf("PIB (em bilhões): ");
    scanf("%f", &c->pib);
    while(getchar() != '\n');

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c->pontosTuristicos);
    while(getchar() != '\n');

    calcularIndicadores(c);
    calcularSuperPoder(c);
}

// Função para exibir os dados da carta
void exibirCarta(Carta c) {
    printf("\n--- Carta %s (%s) ---\n", c.nome, c.estado);
    printf("Codigo: %s\n", c.codigo);
    printf("Populacao: %lu\n", c.populacao);
    printf("Area: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turisticos: %d\n", c.pontosTuristicos);
    printf("Densidade Demografica: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.8f\n", c.pibPerCapita);
    printf("Super Poder: %.2f\n", c.superPoder);
}

// Função de comparação de todos os atributos
void compararCartas(Carta c1, Carta c2) {
    printf("\n========= Comparacao de Cartas =========\n");

    printf("\nPopulacao: %s venceu (%d)\n", 
           (c1.populacao > c2.populacao) ? "Carta 1" : "Carta 2", 
           (c1.populacao > c2.populacao));

    printf("Area: %s venceu (%d)\n", 
           (c1.area > c2.area) ? "Carta 1" : "Carta 2", 
           (c1.area > c2.area));

    printf("PIB: %s venceu (%d)\n", 
           (c1.pib > c2.pib) ? "Carta 1" : "Carta 2", 
           (c1.pib > c2.pib));

    printf("Pontos Turisticos: %s venceu (%d)\n", 
           (c1.pontosTuristicos > c2.pontosTuristicos) ? "Carta 1" : "Carta 2", 
           (c1.pontosTuristicos > c2.pontosTuristicos));

    printf("Densidade Populacional: %s venceu (%d)\n", 
           (c1.densidade < c2.densidade) ? "Carta 1" : "Carta 2", 
           (c1.densidade < c2.densidade));

    printf("PIB per Capita: %s venceu (%d)\n", 
           (c1.pibPerCapita > c2.pibPerCapita) ? "Carta 1" : "Carta 2", 
           (c1.pibPerCapita > c2.pibPerCapita));

    printf("Super Poder: %s venceu (%d)\n", 
           (c1.superPoder > c2.superPoder) ? "Carta 1" : "Carta 2", 
           (c1.superPoder > c2.superPoder));
}

// Função para comparar dois atributos escolhidos
void menuComparacao(Carta c1, Carta c2) {
    int opcao1, opcao2;
    float valor1_a, valor2_a, valor1_b, valor2_b;
    float soma1, soma2;

    do {
        printf("\n===== MENU DE COMPARACAO =====\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("Escolha o PRIMEIRO atributo: ");
        scanf("%d", &opcao1);
        while(getchar() != '\n');
    } while (opcao1 < 1 || opcao1 > 5);

    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        while(getchar() != '\n');
    } while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1);

    // Obter valores do primeiro atributo
    switch (opcao1) {
        case 1: valor1_a = c1.populacao; valor2_a = c2.populacao; break;
        case 2: valor1_a = c1.area; valor2_a = c2.area; break;
        case 3: valor1_a = c1.pib; valor2_a = c2.pib; break;
        case 4: valor1_a = c1.pontosTuristicos; valor2_a = c2.pontosTuristicos; break;
        case 5: valor1_a = c1.densidade; valor2_a = c2.densidade; break;
    }

    // Obter valores do segundo atributo
    switch (opcao2) {
        case 1: valor1_b = c1.populacao; valor2_b = c2.populacao; break;
        case 2: valor1_b = c1.area; valor2_b = c2.area; break;
        case 3: valor1_b = c1.pib; valor2_b = c2.pib; break;
        case 4: valor1_b = c1.pontosTuristicos; valor2_b = c2.pontosTuristicos; break;
        case 5: valor1_b = c1.densidade; valor2_b = c2.densidade; break;
    }

    // Corrigir densidade: menor é melhor, então inverter para soma
    soma1 = (opcao1 == 5 ? (1 / valor1_a) : valor1_a) + (opcao2 == 5 ? (1 / valor1_b) : valor1_b);
    soma2 = (opcao1 == 5 ? (1 / valor2_a) : valor2_a) + (opcao2 == 5 ? (1 / valor2_b) : valor2_b);

    printf("\n=== Comparacao dos atributos ===\n");
    printf("%s: %.2f e %.2f => Soma: %.2f\n", c1.nome, valor1_a, valor1_b, soma1);
    printf("%s: %.2f e %.2f => Soma: %.2f\n", c2.nome, valor2_a, valor2_b, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: %s venceu!\n", c1.nome);
    } else if (soma2 > soma1) {
        printf("\nResultado: %s venceu!\n", c2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

// Programa principal
int main() {
    Carta carta1, carta2;
    int opcao;

    printf("=== Cadastro da Carta 1 ===\n");
    cadastrarCarta(&carta1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    cadastrarCarta(&carta2);

    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Exibir Cartas\n");
        printf("2 - Comparar Todos os Atributos\n");
        printf("3 - Comparacao Simples (1 atributo)\n");
        printf("4 - Comparacao Dupla (2 atributos)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        while(getchar() != '\n');

        switch (opcao) {
            case 1:
                exibirCarta(carta1);
                exibirCarta(carta2);
                break;
            case 2:
                compararCartas(carta1, carta2);
                break;
            case 3:
                menuComparacao(carta1, carta2);
                break;
            case 4:
                menuComparacao(carta1, carta2);
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
