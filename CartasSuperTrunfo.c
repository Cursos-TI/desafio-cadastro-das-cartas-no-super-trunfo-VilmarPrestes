#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1, estado2, codigoCarta1[4], codigoCarta2[4], nomeCidade1[100], nomeCidade2[100];
    int numPontosTuristicos1, numPontosTuristicos2, vencedorPop;
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2, densPop1, densPop2, pibPerCapita1, pibPerCapita2, inversoDensPop1, inversoDensPop2, superPoder1, superPoder2;

    printf("Digite seu estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", codigoCarta1);
    getchar(); 

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao1);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    getchar(); 

    printf("\nDigite seu estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", codigoCarta2);
    getchar(); 

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao2);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    densPop1 = (float) populacao1/area1;

    densPop2 = (float) populacao2/area2;

    pibPerCapita1 = pib1/ (float) populacao1;

    pibPerCapita2 = pib2/ (float) populacao2;
    
    inversoDensPop1 = area1/ (float) populacao1;

    inversoDensPop2 = area2/ (float) populacao2;

    superPoder1 = (populacao1 + area1 + pib1 + numPontosTuristicos1 + pibPerCapita1 + inversoDensPop1);

    superPoder2 = (populacao2 + area2 + pib2 + numPontosTuristicos2 + pibPerCapita2 + inversoDensPop2);

    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1); 
    printf("População: %u habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("A densidade populacional é: %.2f\n", densPop1);
    printf("O PIB per capita é: %.2f\n", pibPerCapita1);
    printf("O Super Poder é: %.2f\n", superPoder1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %u habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("A densidade populacional é: %.2f\n", densPop2);
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);
    printf("O Super Poder é: %.2f\n", superPoder2);

    printf("\n===== Resultados das Comparações =====\n");

    vencedorPop = populacao1 > populacao2 ? 1 : 0;

    printf("População: Carta 1 (%u) vs Carta 2 (%u) -> Vencedor: %d\n", 
            populacao1, populacao2, vencedorPop);

    printf("Área: Carta 1 (%.2f km²) vs Carta 2 (%.2f km²) -> Vencedor: %d\n", 
            area1, area2, area1 > area2 ? 1 : 0);

    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Vencedor: %d\n", 
            pib1, pib2, pib1 > pib2 ? 1 : 0);

    printf("Número de Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) -> Vencedor: %d\n", 
            numPontosTuristicos1, numPontosTuristicos2, numPontosTuristicos1 > numPontosTuristicos2 ? 1 : 0);

    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) -> Vencedor: %d\n", 
            superPoder1, superPoder2, superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
