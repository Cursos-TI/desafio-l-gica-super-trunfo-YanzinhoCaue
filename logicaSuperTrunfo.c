#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Card 1
    int zipcodeOne, populationOne, ageOne, touristAttractionsOne;
    char cityNameOne[50], cardCodeOne[3];
    float areaOne, gdpOne, populationDensityOne, gdpPerCapitaOne;

    int zipcodeTwo, populationTwo, ageTwo, touristAttractionsTwo;
    char cityNameTwo[50], cardCodeTwo[3];
    float areaTwo, gdpTwo, populationDensityTwo, gdpPerCapitaTwo;

    float mediaOneCity, mediaTwoCity;

    //Introdução ao jogo
    printf("================================\n");
    printf("=======JOGO SUPER TRUNFO========\n");
    printf("================================\n");

    //Cadastrando a Primeira Carta
    pritf("==CADASTRE A PRIMEIRA CARTA==\n");

    printf("Digite o código da primeira carta:\n");
    scanf("%d", &cardCodeOne);

    printf("Digite o CEP da primeira carta:\n");
    scanf("%d", &zipcodeOne);

    printf("Digite o nome da primeira carta:\n");
    scanf("%s", &cityNameOne);

    printf("Digite a idade da primeira carta:\n");
    scanf("%d", %ageOne);

    printf("Digite a area geográfica da primeira carta:\n");
    scanf("%f", &areaOne);

    printf("Digite a população da primeira carta:\n");
    scanf("%f", &populationOne);

    printf("Digite o numero de Pontos Turisticos da primeira carta:\n");
    scanf("%d", &touristAttractionsOne);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &gdpOne);

    printf("=======CARTA REGISTRADA COM SUCESSO========\n");

    //Cadastrando a Segunda Carta
    pritf("==CADASTRE A SEGUNDA CARTA==\n");

    printf("Digite o código da segunda carta:\n");
    scanf("%d", &cardCodeTwo);

    printf("Digite o CEP da segunda carta:\n");
    scanf("%d", &zipcodeTwo);

    printf("Digite o nome da segunda carta:\n");
    scanf("%s", &cityNameTwo);

    printf("Digite a idade da segunda carta:\n");
    scanf("%d", %ageTwo);

    printf("Digite a area geográfica da segunda carta:\n");
    scanf("%f", &areaTwo);

    printf("Digite a população da segunda carta:\n");
    scanf("%f", &populationTwo);

    printf("Digite o numero de Pontos Turisticos da segunda carta:\n");
    scanf("%d", &touristAttractionsTwo);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &gdpTwo);

    printf("=======CARTA REGISTRADA COM SUCESSO========\n");

    //Comparando Cartas

    //Comparando Idade
    if (ageOne > ageTwo) {
        printf("A cidade da primeira carta é a mais antiga, com %d anos!\n", ageOne);
    }   else {
        printf("A cidade da segunda carta é a mais antiga, com %d anos!\n", ageTwo);
    }

    //Comparando Area
    if (areaOne > areaTwo) {
        printf("A cidade da primeira carta é a maior, com uma area de %f!\n", areaOne);
    } else {
        printf("A cidade da segunda carta é a maior, com uma area de %f!\n", areaTwo);
    }

    //Comparando População
    if (populationOne > populationTwo) {
        printf("A cidade da primeira carta é a com maior população, com uma população de %d!\n", populationOne);
    }   else {
        printf("A cidade da segunda carta é a com maior população, com uma população de %d!\n", populationTwo);
    }

    //Comparando número de pontos turisticos
    if (touristAttractionsOne > touristAttractionsTwo) {
        printf("A cidade da primeira carta tem o maior número de pontos turisticos, com %d pontos turisticos!\n", touristAttractionsOne);
    } else {
        printf("A cidade da segunda carta tem o maior número de pontos turisticos, com %d pontos turisticos!\n", touristAttractionsTwo);
    }

    //Mostrando carta vencedora

    mediaOneCity = ageOne + areaOne + populationOne + touristAttractionsOne / 4;
    mediaTwoCity = ageTwo + areaTwo + populationTwo + touristAttractionsTwo / 4;

    printf("=======RESULTADO========\n");
    if (mediaOneCity > mediaTwoCity) {
        printf("A cidade da primeira carta é a vencedora!!\n");
    } else if (mediaOneCity = mediaTwoCity) {
        printf("As cidades empataram!!\n");
    } else {
        printf("A cidade da segunda carta é a vencedora!!\n");
    }

    return 0;
}
