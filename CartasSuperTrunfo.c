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
    printf("Estado: %s\n", estado);
    printf("Código: %s %s\n",estado, codigo_da_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.3f Km²\n", area_km);
    printf("PIB: R$ %.2f \n", pib);
    printf("Nº de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita);
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
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_2);
    printf("Super Poder: %.2f\n\n", super_poder_2);
    


    // Comparação das cartas:
    printf("Resultado de qual carta é mais forte!\n");
   
    // Determinar pontos de vitória de cada carta:
    int pontos_carta01 = 0, pontos_carta02 = 0;// saldo da pontuação geral de cada carta
    
    // Determinar carta vencedora:
    printf("Ganha 1 ponto por vitória, em caso de empate as duas carta ganha 1 ponto\n\n");

    // atributo população
    printf("\nAtributo de comparação: População\n\n");

    printf("Carta %s - %s (%s): %ld\n", codigo_da_carta, cidade, estado, populacao);
    printf("Carta %s - %s (%s): %ld\n", codigo_da_carta_2, cidade_2, estado_2, populacao_2);

    if (populacao > populacao_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (populacao == populacao_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2 
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2 
    }

    //atributo area_km
    printf("\n\nAtributo de comparação: Area Km²\n\n");

    printf("Carta %s - %s (%s): %.3f Km²\n", codigo_da_carta, cidade, estado, area_km);
    printf("Carta %s - %s (%s): %.3f Km²\n", codigo_da_carta_2, cidade_2, estado_2, area_km_2);

    if (area_km > area_km_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (area_km == area_km_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo PIB
    printf("\n\nAtributo de comparação: PIB\n\n");

    printf("Carta %s - %s (%s): R$ %.2f\n", codigo_da_carta, cidade, estado, pib);
    printf("Carta %s - %s (%s): R$ %.2f\n", codigo_da_carta_2, cidade_2, estado_2, pib_2);

    if (pib > pib_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (pib == pib_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo Número de pontos turísticos
    printf("\n\nAtributo de comparação: Pontos Turísticos\n\n");

    printf("Carta %s - %s (%s): %d\n", codigo_da_carta, cidade, estado, pontos_turisticos);
    printf("Carta %s - %s (%s): %d\n", codigo_da_carta_2, cidade_2, estado_2, pontos_turisticos_2);

    if (pontos_turisticos > pontos_turisticos_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (pontos_turisticos == pontos_turisticos_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo Densidade Populacional
    printf("\n\nAtributo de comparação: Densidade Populacional\n\n");

    printf("Carta %s - %s (%s): %.2f hab/Km²\n", codigo_da_carta, cidade, estado, densidade_populacional);
    printf("Carta %s - %s (%s): %.2f hab/Km²\n", codigo_da_carta_2, cidade_2, estado_2, densidade_populacional_2);

    if (densidade_populacional < densidade_populacional_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (densidade_populacional == densidade_populacional_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }

    //atributo PIB per capita
    printf("\n\nAtributo de comparação: PIB per capita \n\n");

    printf("Carta %s - %s (%s): R$ %.2f\n", codigo_da_carta, cidade, estado, pib_percapita);
    printf("Carta %s - %s (%s): R$ %.2f\n", codigo_da_carta_2, cidade_2, estado_2, pib_percapita_2);

    if (pib_percapita > pib_percapita_2){
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta, cidade);
        pontos_carta01 += 1; // adiciona ponto a carta 1 
    } else if (pib_percapita == pib_percapita_2){
        printf("Resultado: As duas cartas empataram!\n\n");
        pontos_carta01 += 1;// adiciona ponto a carta 1 
        pontos_carta02 += 1;// adiciona ponto a carta 2
    } else {
        printf("Resultado: Carta %s (%s) venceu\n\n", codigo_da_carta_2, cidade_2);
        pontos_carta02 += 1;// adiciona ponto a carta 2
    }
    
    //Resultado do combate de cartas
    printf("\nResultado do Trunfo de cartas!!!\n\n");

    printf("A carta %s - %s (%s) fez: %d pontos!\n", codigo_da_carta, cidade, estado, pontos_carta01);
    printf("A carta %s - %s (%s) fez: %d pontos!\n", codigo_da_carta_2, cidade_2, estado_2, pontos_carta02);

    if (pontos_carta01 > pontos_carta02){
        printf("Carta Vencedora!!! %s - %s (%s) Com total de: %d pontos!\n", codigo_da_carta, cidade, estado, pontos_carta01);
    } else if (pontos_carta01 < pontos_carta02){
        printf("Carta Vencedora!!! %s - %s (%s) Com total de: %d pontos!\n", codigo_da_carta_2, cidade_2, estado_2, pontos_carta02);
    } else{
        printf("\nAs Duas cartas tem o mesmo tanto de pontos Empataram !!!\n\n");
        printf("A carta %s - %s (%s) fez: %d pontos!\n", codigo_da_carta, cidade, estado, pontos_carta01);
        printf("A carta %s - %s (%s) fez: %d pontos!\n", codigo_da_carta_2, cidade_2, estado_2, pontos_carta02);
    }


    return 0;
}
