#include <stdio.h>

int main(){


    //Variáveis Carta 1
    char estado;
    char cdcarta[50];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float PIB;
    int pontos;
    
    //Variáveis Carta 2    
    char estado2;
    char cdcarta2[50];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    //Variáveis Densidade Populcional e PIB per Capta
    float densidadep1, densidadep2;
    float pibp1, pibp2;

    //Variáveis Super Poder
    float SuperPoderCarta1, SuperPoderCarta2;


    // Introdução
    printf("BEM VINDO AO JOGO DE SUPER TRUNFO VIRTUAL DE PAÍSES !!! \n \n");
    printf("AGORA ESCOLHA AS CARACTERÍSTICAS DA SUA CARTA E LEMBRE-SE A MELHOR VENCE. \n \n");
    
    // SUPER TRUNFO VIRTUAL

    //Carta 1

    printf("A SEGUIR, DIGITE NO TECLADO AS INFORMAÇÕES QUE DESEJA PARA A SUA CARTA 1: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf(" %c" ,&estado);
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
    scanf("%lu" ,&populacao);
    printf("A população da sua cidade será de: %lu pessoas \n \n" ,populacao);

    //Área
    printf("Defina a área da sua cidade: \n");
    scanf("%f" ,&area);
    printf("A área da sua cidade será: %.2f km² \n \n" ,area);

    //PIB
    printf("Defina quanto será o PIB da sua cidade em reais: \n");
    scanf("%f" ,&PIB);
    printf("O PIB da sua cidade será de: %.2f reais \n \n" ,PIB);

    //Pontos
    printf("Defina quantos pontos turisticos sua cidade terá: \n");
    scanf("%d" ,&pontos);
    printf("O número de pontos turisticos da sua cidade será: %d Pontos \n \n" ,pontos);

    //Densidade Populacional Carta 1
    
    densidadep1 = (float) populacao / area; // Cálculo de Densidade 1
    
    printf("Densidade Populacional da Carta 1: %.2f hab/km² \n \n", densidadep1);

    //PIB per Capta Carta 1

    pibp1 = (float) (PIB / populacao); // Cáculo PIB per Capita 1

    printf("PIB per Capita da Carta 1: %.10f reais \n \n", pibp1);

    // Super Poder Carta 1

    SuperPoderCarta1 = (float) (populacao + area + PIB + pontos + pibp1 + densidadep1);// Cálculo Super Poder 1

    printf("O Super Poder da Carta 1 é: %.2f \n \n", SuperPoderCarta1);

    
    // Carta 2

    printf("AGORA ESCOLHA AS CARACTERÍSTICAS DA CARTA 2: \n \n");
    
    //Estado
    printf("Defina o seu estado: \n");
    scanf(" %c" ,&estado2);
    printf("Seu estado será: %c \n \n" ,estado2);

    //Codigo da carta
    printf("Defina o codigo da sua carta: \n");
    scanf("%s" ,cdcarta2);
    printf("O codigo da sua carta será: %s \n \n" ,cdcarta2);

    //Cidade
    printf("Defina qual será sua cidade: \n");
    scanf("%s" ,cidade2);
    printf("Sua cidade será: %s \n \n" ,cidade2);

    //População
    printf("Defina a população da sua cidade: \n");
    scanf("%lu" ,&populacao2);
    printf("A população da sua cidade será de: %lu pessoas \n \n" ,populacao2);

    //Área
    printf("Defina a área da sua cidade: \n");
    scanf("%f" ,&area2);
    printf("A área da sua cidade será: %.2f km² \n \n" ,area2);

    //PIB
    printf("Defina quanto será o PIB da sua cidade em reais: \n");
    scanf("%f" ,&PIB2);
    printf("O PIB da sua cidade será de: %.2f reais \n \n" ,PIB2);

    //Pontos Turisticos
    printf("Defina quantos pontos turisticos sua cidade terá: \n");
    scanf("%d" ,&pontos2);
    printf("O número de pontos turisticos da sua cidade será: %d Pontos \n \n" ,pontos2);

    //Densidade Populacional Carta 2
    densidadep2 = (float) populacao2 / area2;// Cálculo Densidade 2
    
    printf("Densidade Populacional da Carta 2: %.2f hab/km² \n \n", densidadep2);

    //PIB per Capita Carta 2

    pibp2 = (float) (PIB2 / populacao2);// Cálculo PIB per Capita 2
    printf("PIB per Capita da Carta 2: %.10f Reais\n", pibp2);

    // Super Poder Carta 2

    SuperPoderCarta2 = (float) (populacao2 + area2 + PIB2 + pontos2 + pibp2 + densidadep2);// Cálculo Super Poder 2

    printf("O Super Poder da Carta 2: %.2f \n \n", SuperPoderCarta2);

    // Exibição de cartas

    //Carta 1
    printf("\n");
    printf("VAMOS VER AS CARTAS QUE VOCÊ CRIOU: \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo da carta: %s \n", cdcarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f reais \n", PIB);
    printf("Número de Pontos Turisticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("Pib per Capita: %.10f Reais\n", pibp1);
    printf ("Super Poder: %.2f \n", SuperPoderCarta1);
    printf("\n");
    
    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s \n", cdcarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f reais \n", PIB2);
    printf("Número de Pontos Turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("Pib per Capita: %.10f Reais\n", pibp2);
    printf ("Super Poder: %.2f \n", SuperPoderCarta2);
    printf("\n");

    printf("VEREMOS QUEM SERÁ O VENCEDOR, BOA SORTE !!! \n \n");

    printf("Número 1 é para informações verdadeiras e Número 0 para Falsas, se o Super Poder for 1 a carta 1 vence \n \n");

    //Comparando e Decidindo o Campeão
   
    printf("População: Carta 1 Venceu: (%d) \n \n", populacao > populacao2);
    printf("Área: Carta 1 venceu: (%d) \n \n", area > area2);
    printf ("PIB: Carta 1 venceu: (%d) \n \n", PIB > PIB2);
    printf ("Pontos Turísticos: Carta 1 venceu: (%d) \n \n", pontos > pontos2);
    printf("Densidade Populacional: Carta 2 venceu: (%d) \n \n", densidadep1 < densidadep2);
    printf("PIB per Capita: Carta 1 venceu: (%d) \n \n", pibp1 > pibp2);
    printf ("Super Poder: Carta 1 venceu: (%d) \n \n", SuperPoderCarta1 > SuperPoderCarta2);

    return 0;


}