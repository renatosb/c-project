#include <stdio.h>

void imprimeVencendor(int vencedor)
{
    if (vencedor == 1){
        printf("Carta 1 venceu(%d)\n", vencedor);
    }
    else if (vencedor == 0){
        printf("Carta 2 venceu(%d)\n", vencedor);
    }
}

int main()
{
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
      
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade);
    printf("Digite a população: ");
    scanf(" %d", &populacao);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area); 
    printf("Digite o PIB: ");
    scanf(" %f", &pib); 
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos);

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    superPoder = populacao + area + pib + numPontosTuristicos + pibPerCapita + 1/densidadePopulacional;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf(" %f", &area2); 
    printf("Digite o PIB: ");
    scanf(" %f", &pib2); 
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos2);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    superPoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + pibPerCapita2 + 1/densidadePopulacional2;

    int comparaPopulacao = populacao > populacao2 ;
    int comparaArea = area > area2 ;
    int comparaPib = pib > pib2 ;
    int comparaNumPontosTuristicos = numPontosTuristicos > numPontosTuristicos2 ;
    int comparaDensidadePopulacional = densidadePopulacional < densidadePopulacional2 ;
    int comparaPibPerCapita = pibPerCapita > pibPerCapita2 ;
    int comparaSuperPoder = superPoder > superPoder2 ;

    printf("Comparação de Cartas:\n");
    printf("População: "); imprimeVencendor(comparaPopulacao);
    printf("Área: "); imprimeVencendor(comparaArea);  
    printf("PIB: "); imprimeVencendor(comparaPib);
    printf("Número de Pontos Turísticos: "); imprimeVencendor(comparaNumPontosTuristicos);
    printf("Densidade Populacional: "); imprimeVencendor(comparaDensidadePopulacional);
    printf("PIB per Capita: "); imprimeVencendor(comparaPibPerCapita);
    printf("Super Poder: "); imprimeVencendor(comparaSuperPoder);

    return 0;

}



