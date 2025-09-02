#include <stdio.h>

struct carta {
    char Estado[3];
    char Codigo[4];
    char NomeCidade[30];
    unsigned long int Populacao;
    float AreaCidade;
    float PIB;
    int PontosTuristicos;
    float DensidadePopulacional, PIBperCapita;
};

int main() {
    struct carta carta1 = {"SP", "A01","São Paulo", 12000000, 496.8, 828.98, 25}; //Definindo as informações das cartas
    struct carta carta2 = {"RJ", "B02","Rio de Janeiro", 6200000, 435.0, 359.63, 30};
    // -------- Calculos --------
    carta1.DensidadePopulacional = (float)carta1.Populacao / carta1.AreaCidade; // calculando a densidade populacional
    carta2.DensidadePopulacional = (float)carta2.Populacao / carta2.AreaCidade;

    carta1.PIBperCapita = (carta1.PIB * 1000000000.0) / carta1.Populacao; // calculando o PIBperCapita
    carta2.PIBperCapita = (carta2.PIB * 1000000000.0) / carta2.Populacao;

    // ---- Comparação (escolher atributo aqui) ----
    printf("\n=== Comparação de Cartas (Atributo: PIB per Capita) ===\n");
    printf("\nCarta 1 - %s (%s): %.2f\n", carta1.NomeCidade, carta1.Estado, carta1.PIBperCapita);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.NomeCidade, carta2.Estado, carta2.PIBperCapita);

    // Resultado Da comparação
   if (carta1.PIBperCapita > carta2.PIBperCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.NomeCidade);
    } else if (carta2.PIBperCapita > carta1.PIBperCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.NomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
    
}
