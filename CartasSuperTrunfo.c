#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  int carta1;
    char estado1[2];
    char codigodacarta1[3];
    char nomedacidade1[20];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float pibpercapita1;
    float densidadepopulacional1;
    float superpoder1;

    int carta2;
    char estado2[2];
    char codigodacarta2[3];
    char nomedacidade2[20];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float pibpercapita2;
    float densidadepopulacional2;
    float superpoder2;

  // Área para entrada de dados
   
    printf("Carta1\n");
    
    printf("Digite o estado: ");
    scanf("%s", &estado1);
    printf("O estado é: %s\n", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta1);
    printf("O código da cida é: %s\n", codigodacarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomedacidade1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Digite a populacao: ");
    scanf("%d", &população1);
    printf("A população é: %d\n", população1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("A área é: %f\n", area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("O PIB é: %f\n", pib1);
    printf("Digite os pntos turisticos: ");
    scanf("%d", &pontosturisticos1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    pibpercapita1 = (float) pib1 / população1;
    densidadepopulacional1 = (float) população1 / area1;
    printf("Pibpercapita: %f\n", pibpercapita1);
    printf("Densidade Populacional: %f\n", densidadepopulacional1);
    superpoder1 = (float) população1 + area1 + pib1 + pontosturisticos1 + (pibpercapita1 / 1);

    printf("Carta2\n");

    printf("Digite o estado: ");
    scanf("%s", &estado2);
    printf("O estado é: %s\n", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta2);
    printf("O código da cida é: %s\n", codigodacarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomedacidade2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Digite a populacao: ");
    scanf("%d", &população2);
    printf("A população é: %d\n", população2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A área é: %f\n", area2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("O PIB é: %f\n", pib2);
    printf("Digite os pntos turisticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    pibpercapita2 = (float) pib2 / população2;
    densidadepopulacional2 = (float) população2 / area2;
    printf("Pibpercapita: %f\n", pibpercapita2);
    printf("Densidade Populacional: %f\n", densidadepopulacional2);
    superpoder2 = (float) população2 + area2 + pib2 + pontosturisticos2 + (pibpercapita2 / 1);
   
   
   // Área para exibição dos dados da cidade
  
  printf("Carta 1\n");
  printf("Estado: %s\n", estado);
  printf("Código da Cidade: %s\n", codigo_da_carta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d pessoas\n", população);
  printf("Área: %f km²\n", area);
  printf("PIB: %f reais\n", pib);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turísticos);
  printf("Densidade Populacional: %f hab/km²\n", densidadepopulacional);
  printf("PIB per Capita: %f reais\n", pibpercapita);

  printf("Carata 2\n");
  printf("Estado: %s\n", estado);
  printf("Código da Cidade: %s\n", codigo_da_carta);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d pessoas\n", população);
  printf("Área: %f km²\n", area);
  printf("PIB: %f reais\n", pib);
  printf("Pontos Turísticos: %d\n", numero_de_pontos_turísticos);
  printf("Densidade Populacional: %f hab/km²\n", densidadepopulacional);
  printf("PIB per Capita: %f reais\n", pibpercapita);
   
  
 
return 0;
} 
