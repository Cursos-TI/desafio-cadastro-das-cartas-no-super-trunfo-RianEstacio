#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct carta {
    char Estado;
    char Codigo[10];
    char NomeCidade[50];
    unsigned long int Populacao;
    float AreaCidade;
    char PIB[50]; // PIB como string (ex.: "300.50 milhões")
    int PontosTuristicos;
};

int main() {
    struct carta carta1, carta2;
    int c;
    double PIBvalor1, PIBvalor2; 
    double densidade1, densidade2;
    double PIBpc1, PIBpc2;

    // ----------- CARTA 1 -------------
    printf("=== Preencha os dados da Carta 1 ===\n");

    printf("Escolha entre 'A' e 'B' para representar o Estado da carta: ");
    scanf(" %c", &carta1.Estado);

    printf("Escolha qual o código da sua carta, entre '01' e '04': ");
    scanf("%s", carta1.Codigo);

    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o nome da Cidade: ");
    fgets(carta1.NomeCidade, sizeof(carta1.NomeCidade), stdin);
    carta1.NomeCidade[strcspn(carta1.NomeCidade, "\n")] = '\0';

    printf("Digite o número da população da cidade escolhida: ");
    scanf("%lu", &carta1.Populacao);
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &carta1.AreaCidade);

    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o PIB da cidade (ex: 300.50 milhões): ");
    fgets(carta1.PIB, sizeof(carta1.PIB), stdin);
    carta1.PIB[strcspn(carta1.PIB, "\n")] = '\0';

    // extrair valor numérico
    sscanf(carta1.PIB, "%lf", &PIBvalor1);
    PIBvalor1 *= 1e6; // converte para valor absoluto

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &carta1.PontosTuristicos);

    carta1.Estado = toupper(carta1.Estado);


    // ----------- CARTA 2 -------------
    printf("\n=== Preencha os dados da Carta 2 ===\n");

    printf("Escolha entre 'B' e 'C' para representar o Estado da carta: ");
    scanf(" %c", &carta2.Estado);

    printf("Escolha qual o código da sua carta, entre '01' e '04': ");
    scanf("%s", carta2.Codigo);

    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o nome da Cidade: ");
    fgets(carta2.NomeCidade, sizeof(carta2.NomeCidade), stdin);
    carta2.NomeCidade[strcspn(carta2.NomeCidade, "\n")] = '\0';

    printf("Digite o número da população da cidade escolhida: ");
    scanf("%lu", &carta2.Populacao);
    while ((c = getchar()) != '\n' && c != EOF) {} // limpa buffer

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &carta2.AreaCidade);

    while ((c = getchar()) != '\n' && c != EOF) {} // limpa buffer

    printf("Digite o PIB da cidade (ex: 250.75 milhões): ");
    fgets(carta2.PIB, sizeof(carta2.PIB), stdin);
    carta2.PIB[strcspn(carta2.PIB, "\n")] = '\0';

    // extrair valor numérico
    sscanf(carta2.PIB, "%lf", &PIBvalor2);
    PIBvalor2 *= 1e6;

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &carta2.PontosTuristicos);

    carta2.Estado = toupper(carta2.Estado);


    // -------- Calculos --------
    densidade1 = carta1.Populacao / carta1.AreaCidade;
    densidade2 = carta2.Populacao / carta2.AreaCidade;

    PIBpc1 = PIBvalor1 / carta1.Populacao;
    PIBpc2 = PIBvalor2 / carta2.Populacao;


    float superPoder1, superPoder2;

    superPoder1 = (float)carta1.Populacao + carta1.AreaCidade + PIBvalor1 + carta1.PontosTuristicos + PIBpc1 + (1.0 / densidade1);
    superPoder1 = (float)carta2.Populacao + carta2.AreaCidade + PIBvalor2 + carta2.PontosTuristicos + PIBpc2 + (1.0 / densidade2);

    // -------- Mostrar as cartas -----------
    printf("\n====== CARTA 1 ======\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("Código: %c%s\n", carta1.Estado, carta1.Codigo);
    printf("Nome da Cidade: %s\n", carta1.NomeCidade);
    printf("População: %lu\n", carta1.Populacao);
    printf("Área: %.2f km²\n", carta1.AreaCidade);
    printf("PIB: %s\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", PIBpc1);

    printf("\n====== CARTA 2 ======\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("Código: %c%s\n", carta2.Estado, carta2.Codigo);
    printf("Nome da Cidade: %s\n", carta2.NomeCidade);
    printf("População: %lu\n", carta2.Populacao);
    printf("Área: %.2f km²\n", carta2.AreaCidade);
    printf("PIB: %s\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", PIBpc2);



    // Resultado de quem venceu

    printf("\n====== COMPARAÇÃO =====\n");
    printf("População: Carta 1 venceu %d\n", carta1.Populacao > carta2.Populacao);
    printf("Área: Carta 1 venceu %d\n", carta1.AreaCidade > carta2.AreaCidade);
    printf("PIB: Carta 1 venceu %d\n", PIBvalor1 > PIBvalor2);
    printf("Número de Pontos Turísticos: Carta 1 venceu %d\n", carta1.PontosTuristicos > carta2.PontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu %d \n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu %d \n", PIBpc1 > PIBpc2);
    printf("Super Poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);


    return 0;
}
