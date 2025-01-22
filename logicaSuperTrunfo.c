#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Card 1
    int zipcodeOne, populationOne, ageOne, touristAttractionsOne, cityOneWins;
    char cityNameOne[50], cardCodeOne[3];
    float areaOne, gdpOne, populationDensityOne, gdpPerCapitaOne, calculateMediaOne;

    int zipcodeTwo, populationTwo, ageTwo, touristAttractionsTwo, cityTwoWins;
    char cityNameTwo[50], cardCodeTwo[3];
    float areaTwo, gdpTwo, populationDensityTwo, gdpPerCapitaTwo, calculateMediaTwo;

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

    printf("Digite o numero de Pontos Turisticos da segunda carta:\n");
    scanf("%d", &touristAttractionsTwo);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &gdpTwo);

    printf("=======CARTA REGISTRADA COM SUCESSO========\n");

    

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
