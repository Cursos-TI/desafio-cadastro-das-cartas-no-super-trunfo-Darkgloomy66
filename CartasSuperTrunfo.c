#include <stdio.h>

int main(){


    //Variáveis Carta 1
    char estado;
    char cdcarta[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos;
    
    //Variáveis Carta 2    
    char estado2;
    char cdcarta2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    //Variáveis Densidade Populcional e PIB per Capta
    float densidadep1, densidadep2;
    float pibp1, pibp2;


    // Introdução
    printf("BEM VINDO AO JOGO DE SUPER TRUNFO VIRTUAL DE PAISES !!! \n \n");
    printf("AGORA ESCOLHA AS CARACTERISTICAS DA SUA CARTA E LEMBRE-SE A MELHOR VENCE. \n \n");
    
    // SUPER TRUNFO VIRTUAL

    //Carta 1

    printf("A SEGUIR, DIGITE NO TECLADO AS INFORMAÇOES QUE DESEJA PARA A SUA CARTA 1: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf(" %c" ,&estado);
    printf("Seu estado sera: %c \n \n" ,estado);

    //Codigo da carta
    printf("Defina o codigo da sua carta: \n");
    scanf("%s" ,cdcarta);
    printf("O codigo da sua carta sera: %s \n \n" ,cdcarta);

    //Cidade
    printf("Defina qual sera sua cidade: \n");
    scanf("%s" ,cidade);
    printf("Sua cidade sera: %s \n \n" ,cidade);

    //População
    printf("Defina a populaçao da sua cidade: \n");
    scanf("%d" ,&populacao);
    printf("A populaçao da sua cidade sera de: %d pessoas \n \n" ,populacao);

    //Área
    printf("Defina a area da sua cidade: \n");
    scanf("%f" ,&area);
    printf("A area da sua cidade sera: %.2f km² \n \n" ,area);

    //PIB
    printf("Defina quanto sera o PIB da sua cidade (em bilhoes de reais): \n");
    scanf("%f" ,&PIB);
    printf("O PIB da sua cidade sera de: %.2f Bilhoes de reais \n \n" ,PIB);

    //Pontos
    printf("Defina quantos pontos turisticos sua cidade tera: \n");
    scanf("%d" ,&pontos);
    printf("O numero de pontos turisticos da sua cidade sera: %d Pontos \n \n" ,pontos);

    //Densidade Populacional Carta 1
    
    densidadep1 = (float) populacao / area;
    
    printf("Densidade Populacional da Carta 1: %.2f hab/km² \n \n", densidadep1);

    //PIB per Capta Carta 1

    pibp1 = (PIB * 1000000000) /(float) populacao;

    printf("PIB per Capita da Carta 1: %.2f reais \n \n", pibp1);
    
    // Carta 2

    printf("AGORA ESCOLHA AS CARACTERISTICAS DA CARTA 2: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf(" %c" ,&estado2);
    printf("Seu estado sera: %c \n \n" ,estado2);

    //Codigo da carta
    printf("Defina o codigo da sua carta: \n");
    scanf("%s" ,cdcarta2);
    printf("O codigo da sua carta sera: %s \n \n" ,cdcarta2);

    //Cidade
    printf("Defina qual sera sua cidade: \n");
    scanf("%s" ,cidade2);
    printf("Sua cidade sera: %s \n \n" ,cidade2);

    //População
    printf("Defina a populaçao da sua cidade: \n");
    scanf("%d" ,&populacao2);
    printf("A populaçao da sua cidade será de: %d pessoas \n \n" ,populacao2);

    //Área
    printf("Defina a area da sua cidade: \n");
    scanf(" %f" ,&area2);
    printf("A area da sua cidade sera: %.2f km² \n \n" ,area2);

    //PIB
    printf("Defina quanto sera o PIB da sua cidade (em bilhoes de reais): \n");
    scanf("%f" ,&PIB2);
    printf("O PIB da sua cidade sera de: %.2f Bilhoes de reais \n \n" ,PIB2);

    //Pontos Turisticos
    printf("Defina quantos pontos turisticos sua cidade tera: \n");
    scanf("%d" ,&pontos2);
    printf("O numero de pontos turisticos da sua cidade sera: %d Pontos \n \n" ,pontos2);

    //Densidade Populacional Carta 2
    densidadep2 = (float) populacao2 / area2;
    
    printf("Densidade Populacional da Carta 2: %.2f hab/km² \n \n", densidadep2);

    //PIB per Capita Carta 2

    pibp2 = (PIB2 * 1000000000) /(float) populacao2;
    printf("PIB per Capita da Carta 2: %.2f Reais\n", pibp2);


    // Exibição de cartas

    //Carta 1
    printf("\n");
    printf("VAMOS VER AS CARTAS QUE VOCE CRIOU: \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", cdcarta);
    printf("Cidade: %s \n", cidade);
    printf("Populaçao: %d \n", populacao);
    printf("Area: %.2f km² \n", area);
    printf("PIB: %.2f Bilhoes de reais \n", PIB);
    printf("Numero de Pontos Turisticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("Pib per Capita: %.2f Reais\n", pibp1);
    printf("\n");
    
    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s \n", cdcarta2);
    printf("Cidade: %s \n", cidade2);
    printf("Populaçao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhoes de reais \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("Pib per Capita: %.2f Reais\n", pibp2);
    printf("\n");

    printf("VEREMOS QUEM SERA O VENCEDOR, BOA SORTE !!! \n");

    return 0;


}