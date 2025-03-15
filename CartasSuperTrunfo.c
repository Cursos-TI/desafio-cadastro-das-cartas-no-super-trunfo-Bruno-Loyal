#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){

    //Carta 1 
    char estado[5], codigo_da_carta[10], cidade[20];
    long int populacao;
    int pontos_turisticos;
    float area_km, pib;
        
    //Solicitações das informações carta 1
    printf("Cadastro das informações Carta 1!\n");

    printf("Digite 'UR' Representado um estado: \n");
    scanf(" %s", &estado);
    
    printf("Defina o número da carta (01 a 04): \n");
    scanf(" %s", &codigo_da_carta);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade);

    printf("Qual o número de habitantes em %s: \n", cidade);
    scanf(" %ld", &populacao);

    printf("Qual a área de %s em Km²: \n", cidade);
    scanf(" %f", &area_km);

    printf("Qual o valor do PIB(Produto Interno Bruto da cidade) de %s: \nUtilize apenas 1 ponto nas duas ultimas casas:  ", cidade);
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turísticos em %s: \n\n", cidade);
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
    char estado_2[5], codigo_da_carta_2[10], cidade_2[20];
    long int populacao_2;
    int pontos_turisticos_2;
    float area_km_2, pib_2;
        
    //Solicitações das informações carta 2
    printf("Cadastro das informações Carta 2!\n");

    printf("Digite 'UR' Representado um estado: \n");
    scanf(" %s", &estado_2);
    
    printf("Defina o número da carta (01 a 04): \n");
    scanf(" %s", &codigo_da_carta_2);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade_2);

    printf("Qual o número de habitantes em %s: \n", cidade_2);
    scanf(" %ld", &populacao_2);

    printf("Qual a área de %s em Km²: \n", cidade_2);
    scanf(" %f", &area_km_2);

    printf("Qual o valor do PIB(Produto Interno Bruto da cidade) de %s: \nUtilize apenas 1 ponto nas duas ultimas casas:  ", cidade_2);
    scanf(" %f", &pib_2);

    printf("Qual a quantidade de pontos turísticos em %s: \n\n", cidade_2);
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
    printf("Estado: %s\n", estado);
    printf("Código: %s %s\n",estado, codigo_da_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.3f Km²\n", area_km);
    printf("PIB: R$ %.2f \n", pib);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_percapita);
    printf("Super Poder: %.2f\n\n", super_poder);

    //Exibição na tela da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s %s\n",estado_2, codigo_da_carta_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %ld\n", populacao_2);
    printf("Área: %.3f Km²\n", area_km_2);
    printf("PIB: R$ %.2f \n", pib_2);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f\n", pib_percapita_2);
    printf("Super Poder: %.2f\n\n", super_poder_2);
    


    // Comparação das cartas:
    printf("Resultado de qual carta é mais forte!\n");
   
    // Determinar pontos de vitória de cada carta:
    int pontos_carta01 = 0, pontos_carta02 = 0;// saldo da pontuação geral de cada carta
    
    // Determinar carta vencedora:
    printf("Ganha 1 ponto por vitória, em caso de empate as duas carta ganha 1 ponto\n\n");

    // atributo população
    printf("Atributo de comparação: População\n\n");
    printf("Carta %s - %s (%s): %ld\n", codigo_da_carta, cidade, estado, populacao);
    printf("Carta %s - %s (%s): %ld\n", codigo_da_carta_2, cidade_2, estado_2, populacao_2);
    if (populacao > populacao_2){
        printf("Atributo população a Carta %s (%s)venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (populacao == populacao_2){
        printf("Atributo população as duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2 
    } else {
        printf("Atributo população a carta %s (%S)venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2 
    }

    //atributo area_km
    printf("Atributo de comparação: area_km² da carta: %s x area_km² da carta: %s \n", area_km, area_km_2);
    if (area_km > area_km_2){
        printf("Carta %s venceu\n\n", codigo_da_carta);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (area_km == area_km_2){
        printf("As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Carta %s venceu\n\n", codigo_da_carta_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo PIB
    printf("Atributo de comparação: PIB da carta: %s x PIB da carta: %s \n", pib, pib_2);
    if (pib > pib_2){
        printf("Carta %s venceu\n\n", codigo_da_carta);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (pib == pib_2){
        printf("As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Carta %s venceu\n\n", codigo_da_carta_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo Densidade Populacional
    printf("Atributo de comparação: Densidade populacional da carta: %s x Densidade populacional da carta: %s \n", densidade_populacional, densidade_populacional_2);
    if (densidade_populacional < densidade_populacional_2){
        printf("Carta %s venceu\n\n", codigo_da_carta);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (densidade_populacional == densidade_populacional_2){
        printf("As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Carta %s venceu\n\n", codigo_da_carta_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo PIB per capita
    printf("Atributo de comparação: PIB per capita da carta: %s x PIB per capita da carta: %s \n", pib_percapita, pib_percapita_2);
    if (pib_percapita > pib_percapita_2){
        printf("Carta %s venceu\n\n", codigo_da_carta);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (pib_percapita == pib_percapita_2){
        printf("As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Carta %s venceu\n\n", codigo_da_carta_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }
        

    return 0;
}
