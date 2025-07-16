#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Aqui a gente guarda os dados da primeira carta
    char estado1[3], codigo1[4], nome1[30];
    unsigned long populacao1;
    int pontos1;
    float area1, pib1;

    // Aqui a gente guarda os dados da segunda carta
    char estado2[3], codigo2[4], nome2[30];
    unsigned long populacao2;
    int pontos2;
    float area2, pib2;

    int opcao1, opcao2;

    // Pedindo os dados da carta 1
    printf("Carta 1\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", estado1); // lendo estado
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1); // lendo codigo
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1); // lendo nome com espaços
    printf("Populacao: ");
    scanf("%lu", &populacao1); // lendo populacao
    printf("Area (km2): ");
    scanf("%f", &area1); // lendo area
    printf("PIB (milhoes): ");
    scanf("%f", &pib1); // lendo pib
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1); // lendo pontos

    // Pedindo os dados da carta 2 (mesmo esquema)
    printf("\nCarta 2\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (milhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Agora vamos calcular umas coisas que a gente vai usar pra comparar
    float dens1 = populacao1 / area1; // densidade = populacao dividido por area
    float dens2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1; // pib per capita = pib dividido por populacao
    float pibpc2 = pib2 / populacao2;
    // super poder é uma soma meio maluca dos atributos pra fazer um calculo legal
    float super1 = populacao1 + area1 + pib1 + pontos1 + pibpc1 + (1 / dens1);
    float super2 = populacao2 + area2 + pib2 + pontos2 + pibpc2 + (1 / dens2);

    // Menu pra escolher o primeiro atributo que a gente quer comparar
    printf("\nEscolha primeiro atributo para comparar:\n");
    printf("1-Populacao 2-Area 3-PIB 4-Pontos 5-Densidade 6-PIB per capita 7-Super poder\n");
    scanf("%d", &opcao1);

    // Menu pra escolher o segundo atributo
    printf("Escolha segundo atributo para comparar:\n");
    printf("1-Populacao 2-Area 3-PIB 4-Pontos 5-Densidade 6-PIB per capita 7-Super poder\n");
    scanf("%d", &opcao2);

    // Comparando o primeiro atributo escolhido
    printf("\nComparando atributo %d\n", opcao1);
    if (opcao1 == 1) {
        if (populacao1 > populacao2) printf("Carta 1 venceu\n");
        else if (populacao1 < populacao2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 2) {
        if (area1 > area2) printf("Carta 1 venceu\n");
        else if (area1 < area2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 3) {
        if (pib1 > pib2) printf("Carta 1 venceu\n");
        else if (pib1 < pib2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 4) {
        if (pontos1 > pontos2) printf("Carta 1 venceu\n");
        else if (pontos1 < pontos2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 5) {
        if (dens1 < dens2) printf("Carta 1 venceu\n"); // densidade menor vence
        else if (dens1 > dens2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 6) {
        if (pibpc1 > pibpc2) printf("Carta 1 venceu\n");
        else if (pibpc1 < pibpc2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao1 == 7) {
        if (super1 > super2) printf("Carta 1 venceu\n");
        else if (super1 < super2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else {
        printf("Opcao invalida\n");
    }

    // Agora comparando o segundo atributo escolhido, mesma coisa
    printf("\nComparando atributo %d\n", opcao2);
    if (opcao2 == 1) {
        if (populacao1 > populacao2) printf("Carta 1 venceu\n");
        else if (populacao1 < populacao2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 2) {
        if (area1 > area2) printf("Carta 1 venceu\n");
        else if (area1 < area2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 3) {
        if (pib1 > pib2) printf("Carta 1 venceu\n");
        else if (pib1 < pib2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 4) {
        if (pontos1 > pontos2) printf("Carta 1 venceu\n");
        else if (pontos1 < pontos2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 5) {
        if (dens1 < dens2) printf("Carta 1 venceu\n");
        else if (dens1 > dens2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 6) {
        if (pibpc1 > pibpc2) printf("Carta 1 venceu\n");
        else if (pibpc1 < pibpc2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else if (opcao2 == 7) {
        if (super1 > super2) printf("Carta 1 venceu\n");
        else if (super1 < super2) printf("Carta 2 venceu\n");
        else printf("Empate\n");
    }
    else {
        printf("Opcao invalida\n");
    }

    return 0;
}