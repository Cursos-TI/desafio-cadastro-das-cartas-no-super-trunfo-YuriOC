#include <stdio.h>

int main() {

    // Declaração de variáveis
    char estadoA[50], codigoA[4], nomeA[50], estadoB[100], codigoB[4], nomeB[50];
    float areaA, pibA, densA, pibcapA, areaB, pibB, densB, pibcapB;
    int turistaA, turistaB;
    unsigned long int popA, popB;

    // Entrada de dados
    printf("Carta A - Digite o Estado: ");
    scanf("%49s", estadoA); // os números em "%" são para limitar a quantidade de caracteres, que pode causar comportamento inesperado

    printf("Carta A - Digite o Código: ");
    scanf("%3s", codigoA);

    printf("Carta A - Digite o Nome: ");
    scanf("%49s", nomeA);

    printf("Carta A - Digite a Área (km²): ");
    scanf("%f", &areaA);

    printf("Carta A - Digite a População Exata: ");
    scanf("%lu", &popA);

    printf("Carta A - Digite o PIB (1.000.000 R$): ");
    scanf("%f", &pibA);

    printf("Carta A - Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistaA);

    printf("Carta B - Digite o Estado: ");
    scanf("%99s",estadoB);

    printf("Carta B - Digite o Código: ");
    scanf("%3s", codigoB);

    printf("Carta B - Digite o Nome: ");
    scanf("%49s", nomeB);

    printf("Carta B - Digite a Área (km²): ");
    scanf("%f", &areaB);

    printf("Carta B - Digite a População Exata: ");
    scanf("%lu", &popB);

    printf("Carta B - Digite o PIB (1.000.000 R$): ");
    scanf("%f", &pibB);

    printf("Carta B - Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistaB);

    //Cálculos
    densA = (float) popA / areaA; //Força o resultado a ser convertido para Float
    densB = (float) popB / areaB;

    pibcapA = (float) pibA / (popA / 1000000); // PIB em milhões
    pibcapB = (float) pibB / (popB / 1000000); // PIB em milhões

    float superA = (float) areaA + popA + pibA + turistaA + densA + pibcapA;
    float superB = (float) areaB + popB + pibB + turistaB + densB + pibcapB;

    //Variáveis de resultados
    int resultAREA = areaA > areaB;
    int resultPOP = popA > popB;
    int resultPIB = pibA > pibB;
    int resultTURISTA = turistaA > turistaB;
    int resultDENS= densA < densB;
    int resultPIBCAP = pibcapA > pibcapB;
    int resultSuper = superA > superB;

    // Saída de dados no terminal
    printf("Carta A:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f km²\n População: %lu Habitantes\n PIB: R$ %.2f Milhões\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capita: R$ %.2f \n\n", estadoA, codigoA, nomeA, areaA, popA, pibA, turistaA, densA, pibcapA);
    printf("Carta B:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f km²\n População: %lu Habitantes\n PIB: R$ %.2f Milhões\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capita: R$ %.2f \n\n", estadoB, codigoB, nomeB, areaB, popB, pibB, turistaB, densB, pibcapB);


    // Saída do resultado

    printf("O vencedor será representado por um número (Carta A: 1 / Carta B: 0):\n\n Área: %d\n População: %d\n PIB: %d\n Pontos Turísticos: %d\n Densidade Populacional: %d\n PIB per capita: %d\n Super Poder: %d\n\n", resultAREA, resultPOP, resultPIB, resultTURISTA, resultDENS, resultPIBCAP, resultSuper);

}