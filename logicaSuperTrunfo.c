#include <stdio.h>

int main(){

char estado1 [8], estado2 [8];
char codigo1[4], codigo2[4];
char nomeCidade1[50], nomeCidade2[50];
int pontosTuristicos1, pontosTuristicos2;
int populacao1, populacao2;
float area1, area2;
double pib1, pib2;
double densidade1, densidade2;
double pibPercapita1, pibPercapita2;
float superPoder1, superPoder2;

// Dados da primeira cidade


printf("Digite o estado de A a H: \n");
scanf ("%s", estado1);

printf ("Digite o codigo da cidade ex: A01: \n ");
scanf ("%s", codigo1);

printf("Digite o nome da Cidade: \n");
getchar();
fgets (nomeCidade1, sizeof(nomeCidade1), stdin);

printf ("Digite a populacao: \n");
scanf ("%i", &populacao1);

printf(" Digite a area da cidade (em km²): \n");
scanf ("%f", &area1);

printf ("Digite o PIB da cidade: \n");
scanf ("%lf", &pib1);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontosTuristicos1);

printf ("Digite a densidade populacional: \n ");
scanf ("%le", &densidade1);

printf ("Digite o PIB per capita: \n");
scanf ("%lf", &pibPercapita1);

// calculo para primeira cidade
densidade1 = (double) populacao1 / area1;
pibPercapita1 = pib1 / populacao1;
superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1.0 / densidade1);

// Exibicao dos dados da primeira cidade

   printf("\n Carta 1:\n");
   printf("Estado: %s\n", estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", nomeCidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %2f bilhoes de reais\n", pib1);
   printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
   printf("PIB per Capita: %.2f reais\n", pibPercapita1);

   // Dados da segunda cidade

printf("Digite o estado de A a H: \n");
scanf ("%s", estado2);

printf ("Digite o codigo da cidade ex: A01: \n ");
scanf ("%s", codigo2);

printf("Digite o nome da Cidade: \n");
getchar();
fgets (nomeCidade2, sizeof(nomeCidade2), stdin);

printf ("Digite a populacao: \n");
scanf ("%i", &populacao2);

printf(" Digite a area da cidade (em km²): \n");
scanf ("%f", &area2);

printf ("Digite o PIB da cidade: \n");
scanf ("%lf", &pib2);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontosTuristicos2);

printf ("Digite a densidade populacional: \n ");
scanf ("%le", &densidade2);

printf ("Digite o PIB per capita: \n");
scanf ("%lf", &pibPercapita2);


// calculo para segunda cidade
densidade2 = (double) populacao2 / area2;
pibPercapita2 = pib2 / populacao2;
superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidade2);

// Exibicao dos dados da segunda cidade

   printf("\n Carta 2:\n");
   printf("Estado: %s\n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", nomeCidade2);
   printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
   printf("Populacao: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %2f bilhoes de reais\n", pib2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf ("PIB per Capita: %.2f reais\n", pibPercapita2);

   // Comparacao e exibicao dos resultados
   printf("\n Comparacao de Cartas:\n");
   printf("Populacao: carta 1 venceu (%d)\n", populacao1 > populacao2);
   printf("Area: carta 1 venceu (%d)\n", area1 > area2);
   printf("PIB: carta 1 venceu (%d)\n", pib1 > pib2);
   printf("Pontos Turisticos: carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
   printf("Desindade populaciona: carta 1 venceu(%d)\n", densidade1 < densidade2);
   printf("PIB per capita: carta 1 venceu (%d)\n", pibPercapita1 > pibPercapita2);
   printf("Super poder: carta 1 venceu (%d)\n", superPoder1 > superPoder2);
   
   printf("1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence");
  
   return 0;
    
}



// Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
 
// Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
// Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
//Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
 


