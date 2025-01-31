#include <stdio.h>
# include <string.h>
  
   #define NUM_CARTAS 5

{
// logicaSuperTrunfo
/* 31/01/2025 */

char estado [50];
int codigo;
int populacao;
int area;
double pib;

} Cartas;
void cadastroCarta (Carta, cartas[], int indice) {
printf("Cadastro da carta %d\n", indice + 1);

printf ("Estado: ");
scanf ("%s" cartas[indice].estado);

printf("Código da carta: ");
scanf ("%d", &cartas[indice].codigo);

printf ("População (em milhares): ");
scanf ("%d", &cartas[indice].populacao);

printf("Área (em km²): ");
scanf ("%d",&cartas[indice].area);

printf ("PIB (em bilhoes de USD): ");
scanf ("%lf", &cartas[indice].pib);

printf("Cartas %d cadastrada com sucesso!\n\n"), indice +1);
}

void exibirCarta(Cartas carta) {
   printf("Estado: %s\n", carta.estado);
   printf ("Código: %d\n", carta.codigo");
   printf ("Populacao: %d mil\n", carta.populacao);
   printf ("Área: %d km²\n", carta.area);
   printf ("PIB: %.2f bilhões de USD\n", carta.pib);
}
   void compararCarta (Cartas carta1, cartas carta2) {
   printf ("Comparando %s e %s\n, carta1.estado, carta2.estado");
    
    // Comparar população
    if (Carta.populacao > carta2.populacao) {
    printf("%s tem maior população. \n", carta.estado);
    } else if (carta1.populacao < carta2.populacao) {
    printf ("%s tem maior população.\n", carta2.estado);
    } else {
    printf("Ambos os estados têm a mesma população.\n");
    }

    // Comparar área
    if (carta1.area > carta2.area) {
    printf ("%s tem maior área.\n", carta1.estado);
    } else if (carta1.area < carta2.area) {
    printf ("%s tem maior área. \n", carta2.estado);
    } else {
    printf ("Ambos os estados têm a mesma área. \n");
    }
    
    // Comparar PIB
    if (carta1.pib > carta2.pib) {
    printf ("%s tem maior PIB.\n", carta1.estado);
    } else if (carta1.pib < carta2.pib) {
    printf ("%s tem maior PIB. \n", carta2.estado);
    } else {
    printf ("Ambos os estados têm a mesma PIB. \n");
    }
   
   int main() {
   printf("Desafio Super Trunfo!\n");

   Cara cartas [NUM_CARTAS];

   // Cadastrar as cartas
   for (int i = 0; i < NUM_CARTAS; i++) {
   cadastrarCarta(cartas, i);
   }

   // Exibir as cartas cadastradas
   for (int i =0; i < NUM_CARTAS; i++) {
   printf ("Carta %d: \n", i + 1);
   exibirCarta(cartas[i]);
   printf ("\n");
   }

   // Comparar duas cartas (exemplo)
   compararCartas(cartas[i]);

   return 0;
    

}



