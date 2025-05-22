#include <stdio.h>

int main()
{

    // Declaração de variáveis
    char estadoA[50], codigoA[4], nomeA[50], estadoB[100], codigoB[4], nomeB[50];
    float areaA, pibA, densA, pibcapA, areaB, pibB, densB, pibcapB;
    int turistaA, turistaB;
    unsigned long int popA, popB;

    // Variaveis do menu
    int escolha1, escolha2, cartaA, cartaB;
    char atributo1[20], atributo2[20];

    cartaA = 0;
    cartaB = 0;

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
    scanf("%99s", estadoB);

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

    // Cálculos
    densA = (float)popA / areaA; // Força o resultado a ser convertido para Float
    densB = (float)popB / areaB;

    pibcapA = (float)pibA / (popA / 1000000); // PIB em milhões
    pibcapB = (float)pibB / (popB / 1000000); // PIB em milhões

    float superA = (float)areaA + popA + pibA + turistaA + densA + pibcapA;
    float superB = (float)areaB + popB + pibB + turistaB + densB + pibcapB;

    // Saída de dados no terminal
    printf("Carta A:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f km²\n População: %lu Habitantes\n PIB: R$ %.2f Milhões\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capita: R$ %.2f \n\n", estadoA, codigoA, nomeA, areaA, popA, pibA, turistaA, densA, pibcapA);
    printf("Carta B:\n Estado: %s\n Código: %s\n Nome: %s\n Área: %.2f km²\n População: %lu Habitantes\n PIB: R$ %.2f Milhões\n Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per capita: R$ %.2f \n\n", estadoB, codigoB, nomeB, areaB, popB, pibB, turistaB, densB, pibcapB);

    // Menu interativo
    printf("Escolha o primeiro atributo: \n");
    printf("1. Área \n");
    printf("2. População \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade Populacional \n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:

        cartaA += areaA >= areaB ? 1 : 0;
        cartaB += areaB >= areaA ? 1 : 0;
        break;

    case 2:

        cartaA += popA >= popB ? 1 : 0;
        cartaB += popB >= popA ? 1 : 0;
        break;

    case 3:

        cartaA += pibA >= pibB ? 1 : 0;
        cartaB += pibB >= pibA ? 1 : 0;
        break;

    case 4:

        cartaA += turistaA >= turistaB ? 1 : 0;
        cartaB += turistaB >= turistaA ? 1 : 0;
        break;

    case 5:

        cartaA += densA <= densB ? 1 : 0;
        cartaB += densB <= densA ? 1 : 0;
        break;

    default:
        printf("Opção inválida");
        break;
    }

    printf("Escolha o segundo atributo: \n");
    printf("1. Área \n");
    printf("2. População \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade Populacional \n");
    scanf("%d", &escolha2);

    if (escolha2 != escolha1)
    {
        switch (escolha2)
        {

        case 1:

            cartaA += areaA >= areaB ? 1 : 0;
            cartaB += areaB >= areaA ? 1 : 0;
            break;

        case 2:

            cartaA += popA >= popB ? 1 : 0;
            cartaB += popB >= popA ? 1 : 0;
            break;

        case 3:

            cartaA += pibA >= pibB ? 1 : 0;
            cartaB += pibB >= pibA ? 1 : 0;
            break;

        case 4:

            cartaA += turistaA >= turistaB ? 1 : 0;
            cartaB += turistaB >= turistaA ? 1 : 0;
            break;

        case 5:

            cartaA += densA <= densB ? 1 : 0;
            cartaB += densB <= densA ? 1 : 0;
            break;

        default:
            printf("Opção inválida");
            break;
        }
    }
    else
    {
        printf("ERRO: Foi escolhido dois atributos iguais!");
    }

    // resultado

    // Mostrar resultados de forma clara
    printf("\n\n===== RESULTADO FINAL =====\n");
    printf("Carta A - Estado: %s\n", estadoA);
    printf("Carta B - Estado: %s\n\n", estadoB);

    printf("Atributo 1: %s\n", atributo1);
    switch (escolha1)
    {
    case 1:
        printf("  A: %.2f km²\tB: %.2f km²\n", areaA, areaB);
        break;
    case 2:
        printf("  A: %lu hab\tB: %lu hab\n", popA, popB);
        break;
    case 3:
        printf("  A: R$ %.2f mi\tB: R$ %.2f mi\n", pibA, pibB);
        break;
    case 4:
        printf("  A: %d pts\tB: %d pts\n", turistaA, turistaB);
        break;
    case 5:
        printf("  A: %.2f hab/km²\tB: %.2f hab/km²\n", densA, densB);
        break;
    }

    printf("Atributo 2: %s\n", atributo2);
    switch (escolha2)
    {
    case 1:
        printf(" Area: A: %.2f km²\tB: %.2f km²\n", areaA, areaB);
        break;
    case 2:
        printf(" Populacao: A: %lu hab\tB: %lu hab\n", popA, popB);
        break;
    case 3:
        printf(" PIB: A: R$ %.2f mi\tB: R$ %.2f mi\n", pibA, pibB);
        break;
    case 4:
        printf(" Pontos Turisticos: A: %d \tB: %d \n", turistaA, turistaB);
        break;
    case 5:
        printf(" Densidade demografica: A: %.2f hab/km²\tB: %.2f hab/km²\n", densA, densB);
        break;
    }

    printf("\nPontuação Final:\n");
    printf("Carta A: %d ponto(s)\n", cartaA);
    printf("Carta B: %d ponto(s)\n", cartaB);

    // Resultado
    if (cartaA > cartaB)
    {
        printf("\n Carta A venceu!\n");
    }
    else if (cartaB > cartaA)
    {
        printf("\n Carta B venceu!\n");
    }
    else
    {
        printf("\n Empate entre as cartas!\n");
    }
}
