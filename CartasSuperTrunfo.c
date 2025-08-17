#include <stdio.h>

int main(){


    //Variáveis Carta 1
    char estado;
    char cdcarta[50];
    char cidade[50];
    int populaçao;
    float area;
    float PIB;
    int pontos;
    
    //Variáveis Carta 2    
    char estado2;
    char cdcarta2[50];
    char cidade2[50];
    int populaçao2;
    float area2;
    float PIB2;
    int pontos2;

    // Introdução
    printf("BEM VINDO AO JOGO DE SUPER TRUNFO VIRTUAL DE PAÍSES !!! \n \n");
    printf("AGORA ESCOLHA AS CARACTERÍSTICAS DA SUA CARTA E LEMBRE-SE A MELHOR VENCE. \n \n");
    
    // SUPER TRUNFO VIRTUAL

    //Carta 1

    printf("A SEGUIR, DIGITE NO TECLADO AS INFORMAÇÕES QUE DESEJA PARA A SUA CARTA 1: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf("%c" ,&estado);
    printf("Seu estado será: %c \n \n" ,estado);

    //Codigo da carta
    printf("Defina o codigo da sua carta: \n");
    scanf("%s" ,cdcarta);
    printf("O codigo da sua carta será: %s \n \n" ,cdcarta);

    //Cidade
    printf("Defina qual será sua cidade: \n");
    scanf("%s" ,cidade);
    printf("Sua cidade será: %s \n \n" ,cidade);

    //População
    printf("Defina a população da sua cidade: \n");
    scanf("%d" ,&populaçao);
    printf("A população da sua cidade será: %d pessoas \n \n" ,populaçao);

    //Área
    printf("Defina a área da sua cidade: \n");
    scanf("%f" ,&area);
    printf("A área da sua cidade será: %.2f km² \n \n" ,area);

    //PIB
    printf("Defina quanto será o PIB da sua cidade: \n");
    scanf("%f" ,&PIB);
    printf("O PIB da sua cidade será: %.2f Bilhões de reais \n \n" ,PIB);

    //Pontos
    printf("Defina quantos pontos turisticos sua cidade terá: \n");
    scanf("%d" ,&pontos);
    printf("O número de pontos turisticos da sua cidade será: %d Pontos \n \n" ,pontos);
    
    // Carta 2

    
    printf("AGORA ESCOLHA AS CARACTERÍSTICAS DA CARTA 2: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf(" %c" ,&estado2);
    printf("Seu estado será: %c \n \n" ,estado2);

    //Codigo da carta
    printf("Defina o codigo da sua carta: \n");
    scanf(" %s" ,cdcarta2);
    printf("O codigo da sua carta será: %s \n \n" ,cdcarta2);

    //Cidade
    printf("Defina qual será sua cidade: \n");
    scanf(" %s" ,cidade2);
    printf("Sua cidade será: %s \n \n" ,cidade2);

    //População
    printf("Defina a população da sua cidade: \n");
    scanf(" %d" ,&populaçao2);
    printf("A população da sua cidade será: %d pessoas \n \n" ,populaçao2);

    //Área
    printf("Defina a área da sua cidade: \n");
    scanf(" %f" ,&area2);
    printf("A área da sua cidade será: %.2f km² \n \n" ,area2);

    //PIB
    printf("Defina quanto será o PIB da sua cidade: \n");
    scanf(" %f" ,&PIB2);
    printf("O PIB da sua cidade será: %.2f Bilhões de reais \n \n" ,PIB2);

    //Pontos Turisticos
    printf("Defina quantos pontos turisticos sua cidade terá: \n");
    scanf(" %d" ,&pontos2);
    printf("O número de pontos turisticos da sua cidade será: %d Pontos \n \n" ,pontos2);

    // Exibição de cartas

    //Carta 1
    printf("\n");
    printf("VAMOS VER AS CARTAS QUE VOCÊ CRIOU: \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", cdcarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populaçao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", PIB);
    printf("Número de Pontos Turisticos: %d \n", pontos);
    printf("\n");
    
    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s \n", cdcarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populaçao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Número de Pontos Turisticos: %d \n", pontos2);
    printf("\n");

    printf("VEREMOS QUEM SERÁ O VENCEDOR, BOA SORTE !!! \n");

    


}