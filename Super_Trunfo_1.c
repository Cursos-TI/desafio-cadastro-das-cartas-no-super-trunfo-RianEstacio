#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Definido um tipo para a carta
    struct carta
    {
    char Estado;
    char Codigo[10];
    char NomeCidade[50];
    int Populacao;
    float AreaCidade;
    char PIB[50]; // PIB como string(Pode ter "bilhões",etc.)
    int PontosTuristicos;
    };
    


int main() {

    struct carta carta1, carta2;
    int c;

    // ----------- CARTA 1 -------------

    printf("=== Preencha os dados da Carta 1 ===\n");

    printf("Escolha entre 'A' e 'B' para representar o Estado da carta: ");
    scanf(" %c", &carta1.Estado);

    printf("Escolha qual o código da sua carta, entre '01' e '04': ");
    scanf("%s", &carta1.Codigo);

    // limpar o ENTER que sobrou no buffer antes do fgets 
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o nome da Cidade: ");
    fgets(carta1.NomeCidade, sizeof(carta1.NomeCidade), stdin);

    // remover o ENTER do final, se existir
    carta1.NomeCidade[strcspn(carta1.NomeCidade, "\n")] = '\0';

    printf("Digite o número da população da cidade escolhida: ");
    scanf("%d", &carta1.Populacao);
    
    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &carta1.AreaCidade);
    
        // limpar o ENTER que sobrou no buffer antes do fgets
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o PIB da cidade: ");
    fgets(carta1.PIB, sizeof(carta1.PIB), stdin);

    // remover o ENTER do final, se existir
    carta1.NomeCidade[strcspn(carta1.NomeCidade, "\n")] = '\0';

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("\n%d", &carta1.PontosTuristicos);

    carta1.Estado = toupper(carta1.Estado);  // força para maiúsculo



    // ----------- CARTA 2 -------------

    printf("=== Preencha os dados da Carta 2 ===\n");

    printf("Escolha entre 'B' e 'C' para representar o Estado da carta: ");
    scanf(" %c", &carta2.Estado);

    printf("Escolha qual o código da sua carta, entre '01' e '04': ");
    scanf("%s", &carta2.Codigo);

    // limpar o ENTER que sobrou no buffer antes do fgets 
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o nome da Cidade: ");
    fgets(carta2.NomeCidade, sizeof(carta2.NomeCidade), stdin);

    // remover o ENTER do final, se existir
    carta2.NomeCidade[strcspn(carta2.NomeCidade, "\n")] = '\0';

    printf("Digite o número da população da cidade escolhida: ");
    scanf("%d", &carta2.Populacao);
    
    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &carta2.AreaCidade);
    
        // limpar o ENTER que sobrou no buffer antes do fgets
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Digite o PIB da cidade: ");
    fgets(carta2.PIB, sizeof(carta2.PIB), stdin);

    // remover o ENTER do final, se existir
    carta2.NomeCidade[strcspn(carta2.NomeCidade, "\n")] = '\0';

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("\n%d", &carta2.PontosTuristicos);

    carta2.Estado = toupper(carta2.Estado);  // força para maiúsculo

    
    // -------- Mostrar as cartas -----------


        printf("\n====== CARTA 1 ======\n");

    printf("Estado: %c\n", carta1.Estado);

    printf("Código: %c%s\n", carta1.Estado, carta1.Codigo);

    printf("Nome da Cidade: %s\n", carta1.NomeCidade);

    printf("População: %d\n", carta1.Populacao);

    printf("Área: %.2f km²\n", carta1.AreaCidade);

    printf("PIB: %s", carta1.PIB);

    printf("Número de Pontos Turísticos: %d\n", carta1.PontosTuristicos);


        printf("\n====== CARTA 2 ======\n");

    printf("Estado: %c\n", carta2.Estado);

    printf("Código: %c%s\n", carta2.Estado, carta2.Codigo);

    printf("Nome da Cidade: %s\n", carta2.NomeCidade);

    printf("População: %d\n", carta2.Populacao);

    printf("Área: %.2f km²\n", carta2.AreaCidade);

    printf("PIB: %s", carta2.PIB);

    printf("Número de Pontos Turísticos: %d\n", carta2.PontosTuristicos);

    return 0;
};
