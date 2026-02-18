#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int população;
  float area;
  float pib;
  int numero_de_pontos_turísticos;
  // Área para entrada de dados
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
  printf("População: %d pessoas\n", população);
  printf("Área: %f m²\n", area);
  printf("PIB: %f reais\n", pib);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turísticos);

return 0;
} 
