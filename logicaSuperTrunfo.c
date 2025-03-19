#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char estado1[8], estado2[8];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int pontosTuristicos1, pontosTuristicos2;
    float populacao1, populacao2, area1, area2, pib1, pib2, densidade1, densidade2;
    float pibPercapita1, pibPercapita2;
    float somaCarta1, somaCarta2;
    float superPoder1,superPoder2;
    int escolha1, escolha2;

    // Entrada de dados da primeira cidade
    printf("Digite o estado de A a H (Carta 1): \n");
    scanf("%s", estado1);

    printf("Digite o codigo da cidade ex: A01 (Carta 1): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade (Carta 1): \n");
    getchar();
    fgets (nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a populacao (Carta 1): \n");
    scanf("%f", &populacao1);

    printf("Digite a area em km² (Carta 1): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões) (Carta 1): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (Carta 1): \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo para Carta 1
    densidade1 = populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidade2);


    // Entrada de dados da segunda cidade
    printf("Digite o estado de A a H (Carta 2): \n");
    scanf("%s", estado2);

    printf("Digite o codigo da cidade ex: A01 (Carta 2): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade (Carta 2): \n");
    getchar();
    fgets (nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a populacao (Carta 2): \n");
    scanf("%f", &populacao2);

    printf("Digite a area em km² (Carta 1): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões) (Carta 2): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos (Carta 1): \n");
    scanf("%d", &pontosTuristicos2);
   
    // Cálculo para Carta 2
    densidade2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidade2);


    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Escolha do segundo atributo, garantindo que não seja igual ao primeiro***************
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1 - População\n");
        printf("2 - Área em km²\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per capita\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);

        if (escolha1 == escolha2) {
            printf("Erro: O segundo atributo não pode ser o mesmo que o primeiro!\n");
        }
    } while (escolha1 == escolha2);

    // Função para comparar os dois atributos escolhidos
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pontosTuristicos1; valor1Carta2 = pontosTuristicos2; break;
        case 5: valor1Carta1 = densidade1; valor1Carta2 = densidade2; break;
        case 6: valor1Carta1 = pibPercapita1; valor1Carta2 = pibPercapita2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pontosTuristicos1; valor2Carta2 = pontosTuristicos2; break;
        case 5: valor2Carta1 = densidade1; valor2Carta2 = densidade2; break;
        case 6: valor2Carta1 = pibPercapita1; valor2Carta2 = pibPercapita2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Soma dos valores dos atributos para cada carta
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    // Exibição clara dos resultados
    printf("\nResultados da Comparação:\n");
    printf("Atributo 1:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valor1Carta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valor1Carta2);

    printf("Atributo 2:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valor2Carta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valor2Carta2);

    printf("Soma dos Atributos:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, somaCarta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (somaCarta2 > somaCarta1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}