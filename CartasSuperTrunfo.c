#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //carta 1
    char estado1 = 'A';
    char codigodacarta1 [10] = "A01";
    char nomedacidade1 [50] = "sao paulo";
    int populacao1 = 12325000;
    float areaemkm1 = 1521.11;
    float pib1 = 699.28;
    int numeropontosturisticos1 = 50;

     //carta 2
    char estado2 = 'B';
    char codigodacarta2 [10] = "B02";
    char nomedacidade2 [50] = "rio de janeiro";
    int populacao2 = 6748000;
    float areaemkm2 = 1200.25;
    float pib2 = 300.50;
    int numeropontosturisticos2 = 30;


  // Área para entrada de dados
    // carta 1 
    printf("***** Cadastro da carta 1 *****\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c" , &estado1);

    printf("Informe o codigo da carta (Ex:A01)= ");
    scanf("%s", codigodacarta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", nomedacidade1);
    
    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a area em km²: ");
    scanf("%f", &areaemkm1);

    printf("Informe o PIB (em bilhoes de reais): "); 
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numeropontosturisticos1);


  // carta 2
    printf("***** Cadastro da carta 2 *****\n");

    printf("Informe o estado (A-H): ");
    scanf(" %c" , &estado2);

    printf("Informe o codigo da carta (Ex:A01)= ");
    scanf("%s", codigodacarta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", nomedacidade2);
    
    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area em km²: ");
    scanf("%f", &areaemkm2);

    printf("Informe o PIB (em bilhoes de reais): "); 
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numeropontosturisticos2);


  // Área para exibição dos dados da cidade
    printf(" *******Cartas Cadastradas *******\n"); 

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1); 
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", areaemkm1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2); 
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", areaemkm2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos2);



  
return 0;
} 
