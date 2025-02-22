#include <stdio.h>

int main() {

    // Declaração de variáveis
    char estadoA[50], codigoA[4], nomeA[50], estadoB[100], codigoB[4], nomeB[50];
    float areaA, pibA, areaB, pibB;
    int turistaA, turistaB;

    // Entrada de dados
    printf("Carta A - Digite o Estado: ");
    scanf("%49s", estadoA); // os números em "%" são para limitar a quantidade de caracteres, que pode causar comportamento inesperado

    printf("Carta A - Digite o Código: ");
    scanf("%3s", codigoA);

    printf("Carta A - Digite o Nome: ");
    scanf("%49s", nomeA);

    printf("Carta A - Digite a Área: ");
    scanf("%f", &areaA);

    printf("Carta A - Digite o PIB: ");
    scanf("%f", &pibA);

    printf("Carta A - Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistaA);

    printf("Carta B - Digite o Estado: ");
    scanf("%99s",estadoB);

    printf("Carta B - Digite o Código: ");
    scanf("%3s", codigoB);+

    printf("Carta B - Digite o Nome: ");
    scanf("%49s", nomeB);

    printf("Carta B - Digite a Área: ");
    scanf("%f", &areaB);

    printf("Carta B - Digite o PIB: ");
    scanf("%f", &pibB);

    printf("Carta B - Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistaB);

    // Saída de dados no terminal
    printf("Carta A:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estadoA, codigoA, nomeA, areaA, pibA, turistaA);
    printf("Carta B:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", estadoB, codigoB, nomeB, areaB, pibB, turistaB);
}
