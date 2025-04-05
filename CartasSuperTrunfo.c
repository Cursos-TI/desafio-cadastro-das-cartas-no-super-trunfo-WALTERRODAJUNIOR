#include <stdio.h>

int main(){
 
    //PRIMEIRA CARTA, VARIÁVEIS E ENTRADAS

      
      char Estado;
      char Codigo_da_Carta[4];
      char Nome_da_Cidade[20];
      int Populacao;
      float Area_em_km_quadrado;
      float PIB;
      int Numero_de_Pontos_Turisticos;
      float densidade_populacional;
      float PIB_per_capita;

    printf("-_-_-_ Insira os Dados da Primeira Carta -_-_-_ \n");
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
    float densidade_populacional2;
    float PIB_per_capita2;
 



    printf("\n -_-_-_ Insira os Dados da Segunda Carta -_-_-_-\n");
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



             //calculando a densidade populacional primeira carta

             densidade_populacional = (float) Populacao / Area_em_km_quadrado;

             //calculando PIB primeira carta
            
            PIB_per_capita = (float) Populacao / PIB;


             //calculando a densidade populacional segunda carta

             densidade_populacional2 = (float) Populacao2 / Area_em_km_quadrado2;


             //calculando PIB segunda carta

             PIB_per_capita2 = (float) Populacao2 / PIB2;




















      
           //EXIBIÇÃO DE DADOS DA PRIMEIRA CARTA

           printf("\n#*#*#*#*# Primeira Carta #*#*#*#*\n");
           printf("Estado: %c\n", Estado);
           printf("Código da Carta: %s\n", Codigo_da_Carta);
           printf("Nome da Cidade: %s\n", Nome_da_Cidade);
           printf("População: %d de habitantes\n", Populacao);
           printf("Área em km²: %.2f km²\n", Area_em_km_quadrado);
           printf("PIB: %.2f Bilhões de reais\n", PIB);
           printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);
           printf("Desidade populacional: %.2f hab/km²\n", densidade_populacional);
           printf("PIB Per Capita: %.2f reais\n", PIB_per_capita);



           //EXIBIÇÃO DE DADOS DA SEGUNDA CARTA

           printf("\n#*#*#*# Segunda Carta #*#*#*#\n");
           printf("Estado: %c\n", estado2);
           printf("Código da Carta: %s\n", Codigo_da_Carta2);
           printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
           printf("População: %d de habitantes\n", Populacao2);
           printf("Área em km²: %.2f km²\n", Area_em_km_quadrado2);
           printf("PIB: %.2f Bilhões de reais\n", PIB2);
           printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos2);
           printf("Desidade populacional: %.2f hab/km²\n", densidade_populacional2);
           printf("PIB Per Capita: %.2f reais\n", PIB_per_capita2);




           printf("\n\n-------VOCÊ CONCLUIU O CADASTRO COM SUCESSO!!!------\n\n");







    
    return 0;





}
