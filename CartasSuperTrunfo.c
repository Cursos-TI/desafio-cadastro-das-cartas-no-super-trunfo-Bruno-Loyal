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

    //printf("Digite uma letra de 'A' a 'H' Representado um estado: \n");
    //scanf(" %c", &estado);
    
    //printf("Defina o número da carta (01 a 04): \n");
    //scanf(" %s", &codigo_da_carta);

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

    // Super Poder:
    float densidade_inversa = area_km / (float)populacao; // inversão da densidade populacional
    float somar_todos_valores = (float)populacao + area_km + pib + (float)pontos_turisticos + densidade_inversa;
    float super_poder = somar_todos_valores;
    

    
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

    // Super Poder:
    float densidade_inversa_2 = area_km_2 / (float)populacao_2; // inversão da densidade populacional
    float somar_todos_valores_2 = (float)populacao_2 + area_km_2 + pib_2 + (float)pontos_turisticos_2 + densidade_inversa_2;
    float super_poder_2 = somar_todos_valores_2;


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
    printf("Super Poder: %f", super_poder);

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
    printf("Super Poder: %f", super_poder_2);
    


    // Comparação das cartas:
    printf("Resultado de qual carta é mais forte!\n");
    printf("Resultado boleano caso resultado seja [1] carta 1 vence\n");
    printf("Resultado boleano caso resultado seja [0] carta 2 vence\n");

    // calculo da comparação entre Carta 1 e Carta 2:
    float populacao_maior = populacao > populacao_2;
    float area_maior = area_km > area_km_2;
    float pib_maior = pib > pib_2;
    float pontos_turisticos_maior = pontos_turisticos > pontos_turisticos_2; 
    float densidade_populacional_menor = densidade_populacional < densidade_populacional_2;
    float pib_percapita_maior = pib_percapita > pib_percapita_2;
    float super_poder_maior = super_poder > super_poder_2;

    // exibição dos resultados da comparação:
    printf("População: %f", populacao_maior);
    printf("Área: %f", area_maior);
    printf("PIB: %f", pib_maior);
    printf("Pontos Turísticos: %f", pontos_turisticos_maior);
    printf("Densidade Populacional: %f", densidade_populacional_menor);
    printf("PIB per Capita: %f", pib_percapita_maior);
    printf("Super Poder: %f", super_poder_maior);
    

    return 0;
}
