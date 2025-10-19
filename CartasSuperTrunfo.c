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
    unsigned long int populacao1 = 12325000;
    float areaemkm1 = 1521.11;
    float pib1 = 699.28;
    int numeropontosturisticos1 = 50;


     //carta 2
    char estado2 = 'B';
    char codigodacarta2 [10] = "B02";
    char nomedacidade2 [50] = "rio de janeiro";
    unsigned long int populacao2 = 6748000;
    float areaemkm2 = 1200.25;
    float pib2 = 300.50;
    int numeropontosturisticos2 = 30;



  // Área para entrada de dados
    // carta 1 
    printf("***** Cadastro da carta 1 *****\n");

    printf("Informe o estado: \n");
    scanf(" %c" , &estado1);

    printf("Informe o codigo da carta (Ex:A01)= \n");
    scanf("%s", codigodacarta1);

    printf("Informe o nome da cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("Informe a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Informe a area em km²: \n");
    scanf("%f", &areaemkm1);

    printf("Informe o PIB (em bilhoes de reais): \n"); 
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos1);

    float densidadepopulacional1 = (float) populacao1 / areaemkm1;
    float pibpercapita1 = pib1 / (float) populacao1; 

    float superpoder1 = (float) populacao1 + areaemkm1 + pib1 + numeropontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1);



  // carta 2
    printf("***** Cadastro da carta 2 *****\n");

    printf("Informe o estado: ");
    scanf(" %c" , &estado2);

    printf("Informe o codigo da carta (Ex:B02)= \n ");
    scanf("%s", codigodacarta2);

    printf("Informe o nome da cidade: \n ");
    scanf("%s", nomedacidade2);
    
    printf("Informe a populacao: \n ");
    scanf("%lu", &populacao2);

    printf("Informe a area em km²: \n ");
    scanf("%f", &areaemkm2);

    printf("Informe o PIB (em bilhoes de reais): \n "); 
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: \n ");
    scanf("%d", &numeropontosturisticos2);

    float densidadepopulacional2 = (float)populacao2 / areaemkm2;
    float pibpercapita2 = pib2 / (float) populacao2; 

    float superpoder2 = (float) populacao2 + areaemkm2 + pib2 + numeropontosturisticos2 + pibpercapita2 + (1/ densidadepopulacional2);




  // Área para exibição dos dados da cidade
    printf(" *******Cartas Cadastradas *******\n"); 

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1); 
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %f\n", areaemkm1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos1);
    printf("Densidade Populacional:%.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.6f\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2); 
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %f\n", areaemkm2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numeropontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);


//Comparacao das Cartas

printf("************ Comparacao das Cartas **********\n\n");
printf("Populacao: Carta 1 venceu (%d)\n",(int) populacao1 > populacao2);
printf("Area: Carta 1 venceu: (%d)\n", (int) areaemkm1 > areaemkm2);
printf("PIB: Carta 1 venceu (%d)\n", (int) pib1 > pib2); 
printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (int) numeropontosturisticos1 > numeropontosturisticos2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", (int) densidadepopulacional1 < densidadepopulacional2);
printf("PIB per Capita: Carta 1 venceu (%d)\n",(int) pibpercapita1 > pibpercapita2);
printf("Super Poder: Carta 1 venceu (%d)\n", (int) superpoder1 > superpoder2);

  
return 0;
} 
