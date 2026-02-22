#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  char estado[3];
  char codigo_da_carta[3];
  char cidade[20];
  int população;
  float area;
  float pib;
  int numero_de_pontos_turísticos;
  
  // Área para entrada de dados
   
   printf("Digite o estado: \n");
   scanf("%s", &estado);
   printf("O estado é: %s\n", estado);
   printf("Diogite o código da carta: \n");
   scanf("%s", &codigo_da_carta);
   printf("O código da carta é: %s\n", codigo_da_carta);
   printf("Digite o nome da cidade: ");
   scanf("%s", &cidade);
   printf("A cidade é: %s\n", cidade);
   printf("Digite a Populacao: ");
   scanf("%d", &população);
   printf("A população é: %d\n", população);
   printf("Digite a area: ");
   scanf("%f", &area);
   printf("A area é: %f\n", area);
   printf("Digite o pib: ");
   scanf("%f", &pib);
   printf("O PIB é: %f\n", pib);
   printf("Digite o numero de pontos turisticos: ");
   scanf("%d", &numero_de_pontos_turísticos);
   printf("O número de Pontos Turísticos é: %d\n", numero_de_pontos_turísticos);
   
  // Área para exibição dos dados da cidade
  
  printf("Estado: %s\n", estado);
  printf("Código da Cidade: %s\n", codigo_da_carta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d pessoas\n", população);
  printf("Área: %f m²\n", area);
  printf("PIB: %f reais\n", pib);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turísticos);

return 0;
} 
