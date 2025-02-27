#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){

    //Carta 1 
    char estado;
    int populacao, pontos_turisticos;
    char codigo_da_carta[10], cidade[20];
    float area_km, pib;
        
    //Solicitações das informações carta 1
    printf("Cadastro das informações Carta 1!\n");

    printf("Digite uma letra de 'A' a 'H' Representado um estado: \n");
    scanf(" %c", &estado);
    
    printf("Defina o número da carta (01 a 04): \n");
    scanf(" %s", &codigo_da_carta);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade);

    printf("Qual o número de habitantes em %s: \n", cidade);
    scanf(" %d", &populacao);

    printf("Qual a área de %s em Km²: \n", cidade);
    scanf(" %f", &area_km);

    printf("Qual o valor do PIB(Produto Interno Bruto da cidade) de %s: \nUtilize apenas 1 ponto nas duas ultimas casas:  ", cidade);
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turísticos em %s: \n", cidade);
    scanf(" %d", &pontos_turisticos);


    // Calculos carta 1 sobre informações a mais com base nos dados coletados.

    // Densidade Populacional:
    float densidade_populacional = (float)populacao / area_km;
    
    // PIB per Capita:
    float pib_percapita = pib / (float)populacao;
    

    
    //Carta 2  
    char estado_2;
    int populacao_2, pontos_turisticos_2;
    char codigo_da_carta_2[10], cidade_2[20];
    float area_km_2, pib_2;
        
    //Solicitações das informações carta 2
    printf("Cadastro das informações Carta 2!\n");

    printf("Digite uma letra de 'A' a 'H' Representado um estado: \n");
    scanf(" %c", &estado_2);
    
    printf("Defina o número da carta (01 a 04): \n");
    scanf(" %s", &codigo_da_carta_2);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade_2);

    printf("Qual o número de habitantes em %s: \n", cidade_2);
    scanf(" %d", &populacao_2);

    printf("Qual a área de %s em Km²: \n", cidade_2);
    scanf(" %f", &area_km_2);

    printf("Qual o valor do PIB(Produto Interno Bruto da cidade) de %s: \nUtilize apenas 1 ponto nas duas ultimas casas:  ", cidade_2);
    scanf(" %f", &pib_2);

    printf("Qual a quantidade de pontos turísticos em %s: \n", cidade_2);
    scanf(" %d", &pontos_turisticos_2);


    // Calculos carta 2 sobre informações a mais com base nos dados coletados.
    
    
    // Densidade Populacional:
    float densidade_populacional_2 = (float)populacao_2 / area_km;
    
    // PIB per Capita:
    float pib_percapita_2 = pib / (float)populacao_2;


    //Exibição na tela da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n",estado, codigo_da_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f Km²\n", area_km);
    printf("PIB: R$ %.2f \n", pib);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_percapita);
    

    //Exibição na tela da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n",estado_2, codigo_da_carta_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.3f Km²\n", area_km_2);
    printf("PIB: R$ %.2f \n", pib_2);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f\n", pib_percapita_2);

    
    return 0;
}
