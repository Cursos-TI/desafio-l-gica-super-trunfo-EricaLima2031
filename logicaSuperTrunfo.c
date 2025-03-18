#include <stdio.h>
#include <string.h>

int main(){

char estado1 [8], estado2 [8]; 
char codigo1[4], codigo2[4]; 
char nomeCidade1[50], nomeCidade2[50];
int pontosTuristicos1, pontosTuristicos2; 
int populacao1, populacao2;
float area1, area2; 
float pib1, pib2; 
float densidade1, densidade2;
float pibPercapita1, pibPercapita2;
float superPoder1, superPoder2;
int escolha;

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
scanf ("%f", &pib1);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontosTuristicos1);


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
   printf("PIB: %.2f bilhoes de reais\n", pib1);
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
scanf ("%f", &pib2);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontosTuristicos2);


// calculo para segunda cidade
densidade2 = (double) populacao2 / area2;
pibPercapita2 = pib2 / populacao2;
superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0 / densidade2);

// Exibicao dos dados da segunda cidade

printf("\n Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibPercapita2);


   // Comparacao e exibicao dos resultados
   printf("\n Comparacao de Cartas:\n");
   printf("Populacao: carta 1 venceu (%d)\n", populacao1 > populacao2);
   printf("Area: carta 1 venceu (%d)\n", area1 > area2);
   printf("PIB: carta 1 venceu (%d)\n", pib1 > pib2);
   printf("Pontos Turisticos: carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
   printf("Desindade populaciona: carta 1 venceu(%d)\n", densidade1 < densidade2);
   printf("PIB per capita: carta 1 venceu (%d)\n", pibPercapita1 > pibPercapita2);
   printf("Super poder: carta 1 venceu (%d)\n", superPoder1 > superPoder2);
   
   // Comparação carta ganhadora atributo população
   printf("\nComparacao de  cartas (Atributo: Populacao): \n");
   if (populacao1 > populacao2){
      printf("Carta 1 - %s: %d habitantes\n", nomeCidade1,populacao1);
      printf("Carta 2 - %s: %d habitantes\n", nomeCidade2,populacao2);
      printf("Resultado: Carta 1 venceu:\n");
   } else if (populacao2 > populacao1) {
      printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
      printf("Carta 2 - %s: %d habitantes\n", nomeCidade2,populacao2);
      printf("Resultado: Carta 2 venceu:\n");
   } else {
      printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
      printf("Carta 2 - %s: %d habitantes\n", nomeCidade2,populacao2);
      printf("Resultado: Empate!\n");
   }

  // Menu interativo
  printf("\nEscolha o atributo para comparar:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Numero de pontos turisticos\n");
  printf("5 - Desindade populacional\n");
  printf("6 - PIB per capita\n");
  printf("Digite sua escolha: ");
  scanf("%d", &escolha);

  // Comparação baseada na escolha do atribito
  printf("\nComparação de Cartas:\n");
  switch (escolha) {

   case 1:
   printf("Atributo Populacao\n");
   printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
   printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
   if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 venceu!\n");
   } else if (populacao2 > populacao1) {
   printf("Resultado: Carta 1 Venceu!\n");
   } else {
      printf("Resultado Empate!\n");
   }
   break;
   case 2:
   printf("Atributo: Area\n");
   printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
   printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
  
   if (area1 > area2) {
      printf("Resultado: Carta 1 venceu!\n");
   } else if (area2 > area1) {
   printf("Resultado: Carta 2 venceu!\n");
} else {
   printf("Resultado: Empate!\n");
}
break;
case 3:
printf("Atributo: PIB \n");
printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);
if (pib1 > pib2) {
   printf("Resultado: Carta 1 venceu!\n");
} else if (pib2 > pib1) {
printf("Resultado: Carta 2 venceu!\n");
} else {
printf("Resultado: Empate!\n");
}

break;
case 4:
printf("Atributo: Número de pontos turisticos\n");
printf("Carta 1 - %s: %.2d pontos turisticos\n", nomeCidade1, pontosTuristicos1);
printf("Carta 2 - %s: %.2d pontos turisticos\n", nomeCidade2, pontosTuristicos2);
if (pontosTuristicos1 > pontosTuristicos2) {
   printf("Resultado: Carta 1 venceu!\n");
} else if (pontosTuristicos2 > pontosTuristicos1) {
printf("Resultado: Carta 2 venceu!\n");
} else {
printf("Resultado: Empate!\n");
}

break;
case 5:
printf("Atributo: Densidade Populacional\n");
printf("Carta 1 - %s: %.2f hab/km² \n", nomeCidade1, densidade1);
printf("Carta 2 - %s: %.2f \n", nomeCidade2, densidade2);
if (densidade1 > densidade2) {
   printf("Resultado: Carta 1 venceu!\n");
} else if (densidade1 < densidade2) {
printf("Resultado: Carta 2 venceu!\n");
} else {
printf("Resultado: Empate!\n");
}

break;
 case 6:
printf("Atributo: PIB per capita\n");
printf("Carta 1 - %s: %.2f reais\n", nomeCidade1, pibPercapita1);
printf("Carta 2 - %s: %.2f reais\n", nomeCidade2, pibPercapita2);
if (pibPercapita1 > pibPercapita2) {
   printf("Resultado: Carta 1 venceu!\n");
} else if (pibPercapita1 > pibPercapita2) {
printf("Resultado: Carta 2 venceu!\n");
} else {
printf("Resultado: Empate!\n");
}
break;

default:
printf("Opção Invalida!\n");
   
  
}
   
   
return 0;
}






