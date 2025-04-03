#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     //PRIMEIRA CARTA, VARIÁVEIS E ENTRADAS

      
     char Estado;
     char Codigo_da_Carta[4];
     char Nome_da_Cidade[20];
     int Populacao;
     float Area_em_km_quadrado;
     float PIB;
     int Numero_de_Pontos_Turisticos;

   printf("Insira os Dados da Primeira Carta\n");
   printf("Digite o Estado: \n");
   scanf( "%c", &Estado);

   printf("Digite o Codigo da Carta: \n");
   scanf("%s", Codigo_da_Carta);

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", Nome_da_Cidade);

   printf("Digite a População: \n");
   scanf("%d", &Populacao);

   printf("Digite a Área: \n");
   scanf("%f", &Area_em_km_quadrado);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Digite o Número de Pontos Tutísticos: \n");
   scanf("%d", &Numero_de_Pontos_Turisticos);

 


   //SEGUNDA CARTA, VARIÁVEIS E ENTRADAS

      
   char estado2;
   char Codigo_da_Carta2[4];
   char Nome_da_Cidade2[20];
   int Populacao2;
   float Area_em_km_quadrado2;
   float PIB2;
   int Numero_de_Pontos_Turisticos2;



   printf("\n Insira os Dados da Segunda Carta\n");
   printf("Digite o Estado: \n");
   scanf(" %c", &estado2);

   printf("Digite o Codigo da Carta: \n");
   scanf("%s", Codigo_da_Carta2);

   printf("Digite o Nome da Cidade: \n");
   scanf("%s", Nome_da_Cidade2);

   printf("Digite a População: \n");
   scanf("%d", &Populacao2);

   printf("Digite a Área: \n");
   scanf("%f", &Area_em_km_quadrado2);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB2);

   printf("Digite o Número de Pontos Tutísticos: \n");
   scanf("%d", &Numero_de_Pontos_Turisticos2);

     
          //EXIBIÇÃO DE DADOS DA PRIMEIRA CARTA

          printf("\nPrimeira Carta\n");
          printf("Estado: %c\n", Estado);
          printf("Código da Carta: %s\n", Codigo_da_Carta);
          printf("Nome da Cidade: %s\n", Nome_da_Cidade);
          printf("População: %d milhões de habitantes\n", Populacao);
          printf("Área em km²: %.2f km²\n", Area_em_km_quadrado);
          printf("PIB: %.2f milhões de reais\n", PIB);
          printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);



          //EXIBIÇÃO DE DADOS DA SEGUNDA CARTA

          printf("\nSegunda Carta\n");
          printf("Estado: %c\n", estado2);
          printf("Código da Carta: %s\n", Codigo_da_Carta2);
          printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
          printf("População: %d milhões de habitantes\n", Populacao2);
          printf("Área em km²: %.2f km²\n", Area_em_km_quadrado2);
          printf("PIB: %.2f milhões de reais\n", PIB2);
          printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos2);



          printf("\n\nVOCÊ CONCLUIU O CADASTRO COM SUCESSO!!!\n\n");







   
   return 0;





}