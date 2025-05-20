#include <stdio.h>

int main()
{
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &area); 
    printf("Digite o PIB: ");
    scanf("%f", &pib); 
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos);

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &area); 
    printf("Digite o PIB: ");
    scanf("%f", &pib); 
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);

}