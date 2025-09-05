#include <stdio.h>

struct carta {
    char Pais[10];
    float Populacao;
    double AreaPais;
    float PIB;
    int PontosTuristicos;
    float DensidadePopulacional, PIBperCapita;

};
    int main(){
    
        
int opcao;
  
    struct carta carta1 = {"Brasil", 213421037, 8509379.57, 2.179, 350}; //Definindo as informações das cartas
    struct carta carta2 = {"Alemanha", 84075075, 357588.00, 4.660, 300};
    // -------- Calculos --------
    carta1.DensidadePopulacional = (float)carta1.Populacao / carta1.AreaPais; // calculando a densidade populacional
    carta2.DensidadePopulacional = (float)carta2.Populacao / carta2.AreaPais;

    carta1.PIBperCapita = (carta1.PIB * 1000000000000.0) / carta1.Populacao; // calculando o PIBperCapita
    carta2.PIBperCapita = (carta2.PIB * 1000000000000.0) / carta2.Populacao;

    // ---- Comparação (escolher atributo aqui) ----

    printf("=== Escolha um dos atributo para comparar ===\n");
    printf("1. População\n");
    printf("2. Área do país\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Pontos turisticos\n");
    printf("6. Densidade Populacional\n");
    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n");
    printf("Brasil vs Alemanha\n");
    switch (opcao)
    {
    case 1:
        printf("Comparação da População\n");
        printf("Brasil: %.0f Milhões\nAlemanha: %.0f Milhões\n", carta1.Populacao, carta2.Populacao);
        if (carta1.Populacao > carta2.Populacao){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.Populacao < carta2.Populacao){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    case 2:
        printf("Comparação da Área do País\n");
        printf("Brasil: %.2f km²\nAlemanha: %.2f km²\n", carta1.AreaPais, carta2.AreaPais);
        if (carta1.AreaPais > carta2.AreaPais){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.AreaPais < carta2.AreaPais){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    case 3:
        printf("Comparação do PIB\n");
        printf("Brasil: %.3f Trilhões USD\nAlemanha: %.3f Trilhões USD\n", carta1.PIB, carta2.PIB);
        if (carta1.PIB > carta2.PIB){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.PIB < carta2.PIB){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    case 4:
        printf("Comparação do PIB per capita\n");
        printf("Brasil: %.2f USD\nAlemanha: %.2f USD\n", carta1.PIBperCapita, carta2.PIBperCapita);
        if (carta1.PIBperCapita > carta2.PIBperCapita){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.PIBperCapita < carta2.PIBperCapita){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    case 5:
        printf("Comparação dos Pontos Turisticos\n");
        printf("Brasil: %d Pontos Turisticos\nAlemanha: %d Pontos Turisticos\n", carta1.PontosTuristicos, carta2.PontosTuristicos);
        if (carta1.PontosTuristicos > carta2.PontosTuristicos){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.PontosTuristicos < carta2.PontosTuristicos){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    case 6:
        printf("Comparação da Densidade Populacional\n");
        printf("Brasil: %.2f hab/km²\nAlemanha: %.2f hab/km²\n", carta1.DensidadePopulacional, carta2.DensidadePopulacional);
        if (carta1.DensidadePopulacional > carta2.DensidadePopulacional){
            printf("=== Carta 1 Venceu: Brasil ===\n");
        }else if (carta1.DensidadePopulacional < carta2.DensidadePopulacional){
            printf("=== Carta 1 Venceu: Alemanha ===");
        } else{
            printf("=== Empate ===\n");
        }
        break;
    default:
        printf("Opção Invalida");
        break;
    }

    return 0;
    
}
