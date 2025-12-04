#include <stdio.h>

int main() {



//Dados da primeira carta;
 
char estado[2];

char codigo[3];

char cidade[20];

int populacao;

float pib;

float km2;

int pturisticos;

// Dados da segunda carta
char estado2[2];

char codigo2[3];

char cidade2[20];

int populacao2;

float pib2;

float km22;

int pturisticos2;

printf("Insira os dados referentes a primeira carta 1: \n");

printf ("Insira o estado da carta 1: \n");
scanf("%s", estado);

printf ("Insira o codigo: \n");
scanf ("%s", codigo);

printf("Insira a cidade: \n");
scanf("%s", cidade);            

printf("Insira a populacao: \n");
scanf("%d", &populacao);    

printf("Insira o PIB: \n");
scanf("%f", &pib);  

printf("Insira a area em km2: \n");
scanf("%f", &km2);

printf("Insira o numero de pontos turisticos: \n");
scanf("%d", &pturisticos);


printf("\nDados da carta 1:\n");
printf("Estado: %s\n", estado);         
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d\n", &populacao);
printf("PIB: %.2f\n", pib);
printf("Area em km2: %.2f\n", km2);
printf("Numero de pontos turisticos: %d\n", pturisticos);



printf("\nInsira os dados referentes a segunda carta 2: \n");

printf("Insira o estado da carta 2: \n");
scanf("%s", estado2);

printf("Insira o codigo: \n");
scanf("%s", codigo2);

printf("Insira a cidade: \n");
scanf("%s", cidade2);

printf("Insira a populacao: \n");
scanf("%d", &populacao2);

printf("Insira o PIB: \n");
scanf("%f", &pib2); 

printf("Insira a area em km2: \n");
scanf("%f", &km22);

printf("Insira o numero de pontos turisticos: \n");
scanf("%d", &pturisticos2);

printf("\nDados da carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("PIB: %.2f\n", pib2);
printf("Area em km2: %.2f\n", km22);
printf("Numero de pontos turisticos: %d\n", pturisticos2);


return 0;





}