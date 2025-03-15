#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Maycon Douglas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    int pontosTuristicos, pontosTuristicos2;
    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    float densidadePopulacional, densidadePopulacional2, pibPerCapita, pibPerCapita2;

    // Cadastro das Cartas:

    printf("*** JOGO DE CARTAS SUPER-TRUNFO***\n");
    printf("\n");
    printf("CADASTRANDO A PRIMEIRA CARTA-01: \n");
    printf("Nome da cidade: \n");
    scanf("%s", &nome);
    printf("Código da cidade: \n");
    scanf("%s", &codigo);
    printf("População da cidade: \n");
    scanf("%lu", &populacao);
    printf("Área da cidade: \n");
    scanf("%f", &area);
    printf("PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("\n");
    printf("CADASTRANDO A SEGUNDA CARTA-02: \n");
    printf("Nome da cidade: \n");
    scanf("%s", &nome2);
    printf("Código da cidade: \n");
    scanf("%s", &codigo2);
    printf("População da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Área da cidade: \n");
    scanf("%f", &area2);
    printf("PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

// Cauculando o poder das cartas

    float superPoder1 = populacao + area + pib + pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);


    // Exibição dos Dados da primeira carta:
  
    printf("### CARTAS CADASTRDAS COM SUCESSOS ### \n");
    printf("\n");
 
    printf("Carta 1:\n");
    printf("Nome: %s \n", nome);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %f reais\n", pib);
    printf("Área: %.2f km² \n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f \n", pibPerCapita);
    printf("Super Poder: %f \n", superPoder1);

    printf("\n");

// Exibição dos Dados da segunda carta:
    printf("Carta 2:\n");
    printf("Nome: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %f reais \n", pib2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: R$ %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f \n", pibPerCapita2);
    printf("Super Poder: %f \n", superPoder2);
    printf("\n");

// Resultado das comparaões entre as cartas.

    printf("***DETERMINANDO A CARTA VENCEDORA***\n");
    printf("\n");

    printf("População: Carta 1 venceu: (%d) \n", populacao > populacao2);
    printf("Área: Carta 1 venceu: (%d) \n", area > area2);
    printf("PIB: Carta 1 venceu: (%d) \n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu: (%d) \n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu: (%d) \n", densidadePopulacional > densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu: (%d) \n", pibPerCapita > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu: (%d) \n", superPoder1 > superPoder2);

// Comparação das cartas ( atributos: População)

printf("\n #### CARTA VENCEDORA COM MAIOR PODER FOI: ####\n");
printf("\n");
    
printf("CARTA 01 - SUPER PODER: (%f)\n", superPoder1);
printf("CARTA 02 - SUPER PODER: (%f)\n", superPoder2);
printf("\n");


if (superPoder1 == superPoder2)
{
    printf("RESULTADO: Houve um Impate!!\n");
} 
else if ((superPoder1 > superPoder2) && (superPoder2 < superPoder2))
{   
    printf("RESULTADO: Carta 01 venceu!!\n");
} else 
{
    printf("RESULTADO: Carta 02 venceu!!\n");
}

     //Variaveis para escolha do usuário
    int escolha1;
    int escolha2;
    int resposta = (escolha2!=escolha1?1:0);

    //menu de escolha para disputa do usuario
    printf("Escolha dois atributo para a disputa das cartas:\n");
    printf("1. população;\n");
    printf("2. área;\n");
    printf("3. PIB;\n");
    printf("4. pontos turisticos;\n");
    printf("5. Densidade populacional;\n");
    printf("6. PIB per Capita;\n");
    printf("7. Super poder;\n");
    printf("Escolha1:");
    scanf("%d", &escolha1);
    printf("escolha2:");
    scanf("%d", &escolha2);
    printf("  \n");
    
    
    if (escolha1!=escolha2)
    {

    //apresentação das cartas de forma geral
    printf("***Resultado da disputa***\n");
    printf("carta1 cidade: %s\n" , nome);
    printf("carta2 cidade: %s\n" , nome2);
    printf("  \n");

        //resultado primeira escolha
        switch (escolha1)
        {
            case 1 :
            printf("atributo escolhido foi população:\n");
            printf("População de %s: %d \n", nome, populacao);
            printf("População de %s: %d \n", nome2, populacao2);
            
            if(populacao>populacao2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(populacao<populacao2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 2:
            printf("atributo escolhido foi área:\n");
            printf("Área de %s: %.2f \n", nome, area);
            printf("Área de %s: %.2f \n", nome2, area2);
                
            if(area>area2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(area<area2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;
        
            case 3:
            printf("atributo escolhido foi PIB:\n");
            printf("PIB de %s: %.2f \n", nome, pib);
            printf("PIB de %s: %.2f \n", nome2, pib2);
                
            if(pib>pib2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pib<pib2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 4:
            printf("atributo escolhido foi pontos turisticos:\n");
            printf("Pontos Turiticos de %s: %d \n", nome, pontosTuristicos);
            printf("Pontos Turiticos de %s: %d \n", nome2, pontosTuristicos2);
                
            if(pontosTuristicos>pontosTuristicos2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pontosTuristicos<pontosTuristicos2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 5:
            printf("atributo escolhido foi densidade populacional:\n");
            printf("Densidade de %s: %.2f \n", nome, densidadePopulacional);
            printf("Densidade de %s: %.2f \n", nome2, densidadePopulacional2);
                
            if(densidadePopulacional<densidadePopulacional2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(densidadePopulacional>densidadePopulacional2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 6:
            printf("atributo escolhido foi PIB per capita:\n");
            printf("PIB Per Capita de %s: %.2f \n", nome, pib);
            printf("PIB Per Capita de %s: %.2f \n", nome2, pib2);
                
            if(pib>pib2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pib<pib2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 7:
            printf("atributo escolhido foi Super Poder:\n");
            printf("Super Poder de %s: %.2f \n", nome, superPoder1);
            printf("Super Poder de %s: %.2f \n", nome2, superPoder2);
                
            if(superPoder1>superPoder2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(superPoder1<superPoder2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

        default:
        printf("***escolha invalida!!!*** \n");
        printf("reinicie o jogo! \n");
        printf("Encerrando... \n");
        printf("  \n");
            break;
        }

        //possibilidades da segunda escolha
        switch (escolha2)
        {
            case 1 :
            printf("atributo escolhido foi população:\n");
            printf("População de %s: %d \n", nome, populacao);
            printf("População de %s: %d \n", nome2, populacao2);
            
            if(populacao>populacao2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(populacao<populacao2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 2:
            printf("atributo escolhido foi área:\n");
            printf("Área de %s: %.2f \n", nome, area);
            printf("Área de %s: %.2f \n", nome2, area2);
                
            if(area>area2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(area<area2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;
        
            case 3:
            printf("atributo escolhido foi PIB:\n");
            printf("PIB de %s: %.2f \n", nome, pib);
            printf("PIB de %s: %.2f \n", nome2, pib2);
                
            if(pib>pib2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pib<pib2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 4:
            printf("atributo escolhido foi pontos turisticos:\n");
            printf("Pontos Turiticos de %s: %d \n", nome, pontosTuristicos);
            printf("Pontos Turiticos de %s: %d \n", nome2, pontosTuristicos2);
                
            if(pontosTuristicos>pontosTuristicos2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pontosTuristicos<pontosTuristicos2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 5:
            printf("atributo escolhido foi densidade populacional:\n");
            printf("Densidade de %s: %.2f \n", nome, densidadePopulacional);
            printf("Densidade de %s: %.2f \n", nome2, densidadePopulacional2);
                
            if(densidadePopulacional<densidadePopulacional2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(densidadePopulacional>densidadePopulacional2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 6:
            printf("atributo escolhido foi PIB per capita:\n");
            printf("PIB Per Capita de %s: %.2f \n", nome, pib);
            printf("PIB Per Capita de %s: %.2f \n", nome2, pib2);
                
            if(pib>pib2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(pib<pib2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 7:
            printf("atributo escolhido foi Super Poder:\n");
            printf("Super Poder de %s: %.2f \n", nome, superPoder1);
            printf("Super Poder de %s: %.2f \n", nome2, superPoder2);
                
            if(superPoder1>superPoder2){
                printf("Carta 1(%s) venceu!!! \n", nome);
                printf("  \n");
            }else if(superPoder1<superPoder2){
                printf("carta 2(%s) venceu!!! \n", nome2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

        default:
        printf("***escolha invalida!!!*** \n");
        printf("reinicie o jogo! \n");
        printf("Encerrando... \n");
        printf("  \n");
            break;
        }
    }else{
        printf("Sua segunda escolha de atributos deve ser diferente da primeira! \n");
        printf("Segunda escolha inválida!!! \n");
        printf("encerrando... \n");
        printf("***Programa Encerrado!***\n");
        printf("  \n");
    }

printf("\n");


    return 0;
}