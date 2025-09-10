#include <stdio.h>

struct carta {
    char Pais[15];
    float Populacao; // em habitantes
    double AreaPais; // km²
    float PIB; // trilhões USD
    int PontosTuristicos;
    float DensidadePopulacional, PIBperCapita;
};
// Função para traduzir o número do atributo para texto
const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área do país";
        case 3: return "PIB";
        case 4: return "PIB per capita";
        case 5: return "Pontos turísticos";
        case 6: return "Densidade Populacional";
        default: return "Atributo inválido";
    }
}

int main() {
    int opcao1, opcao2;

    struct carta carta1 = {"Brasil", 213421037, 8509379.57, 2.179, 350};
    struct carta carta2 = {"Alemanha", 84075075, 357588.00, 4.660, 300};

    // --- Cálculos ---
    carta1.DensidadePopulacional = carta1.Populacao / carta1.AreaPais;
    carta2.DensidadePopulacional = carta2.Populacao / carta2.AreaPais;

    carta1.PIBperCapita = (carta1.PIB * 1000000000000.0) / carta1.Populacao;
    carta2.PIBperCapita = (carta2.PIB * 1000000000000.0) / carta2.Populacao;

    // --- Menu 1 ---
    printf("=== Escolha o PRIMEIRO atributo ===\n");
    printf("1. População\n");
    printf("2. Área do país\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Pontos turisticos\n");
    printf("6. Densidade Populacional\n");
    scanf("%d", &opcao1);

    // --- Menu 2 (dinâmico) ---
    printf("\n=== Escolha o SEGUNDO atributo ===\n");

if (opcao1 != 1) printf("1. População\n");
if (opcao1 != 2) printf("2. Área do país\n");
if (opcao1 != 3) printf("3. PIB\n");
if (opcao1 != 4) printf("4. PIB per capita\n");
if (opcao1 != 5) printf("5. Pontos turisticos\n");
if (opcao1 != 6) printf("6. Densidade Populacional\n");

scanf("%d", &opcao2);

if (opcao2 == opcao1) {
    printf("⚠️ Você não pode escolher o mesmo atributo duas vezes!\n");
    printf("Segunda escolha cancelada.\n");
    return 0; // finaliza o programa
}

    // --- Comparações ---
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    // Pega valores da primeira escolha
    switch(opcao1){
        case 1: valor1_c1 = carta1.Populacao; valor1_c2 = carta2.Populacao; break;
        case 2: valor1_c1 = carta1.AreaPais; valor1_c2 = carta2.AreaPais; break;
        case 3: valor1_c1 = carta1.PIB; valor1_c2 = carta2.PIB; break;
        case 4: valor1_c1 = carta1.PIBperCapita; valor1_c2 = carta2.PIBperCapita; break;
        case 5: valor1_c1 = carta1.PontosTuristicos; valor1_c2 = carta2.PontosTuristicos; break;
        case 6: valor1_c1 = carta1.DensidadePopulacional; valor1_c2 = carta2.DensidadePopulacional; break;
    }

    // Pega valores da segunda escolha
    switch(opcao2){
        case 1: valor2_c1 = carta1.Populacao; valor2_c2 = carta2.Populacao; break;
        case 2: valor2_c1 = carta1.AreaPais; valor2_c2 = carta2.AreaPais; break;
        case 3: valor2_c1 = carta1.PIB; valor2_c2 = carta2.PIB; break;
        case 4: valor2_c1 = carta1.PIBperCapita; valor2_c2 = carta2.PIBperCapita; break;
        case 5: valor2_c1 = carta1.PontosTuristicos; valor2_c2 = carta2.PontosTuristicos; break;
        case 6: valor2_c1 = carta1.DensidadePopulacional; valor2_c2 = carta2.DensidadePopulacional; break;
    }

    // --- Resultado da soma ---
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== Resultado da Comparação ===\n");
    printf("%s vs %s\n", carta1.Pais, carta2.Pais);
     // Mostrar atributos escolhidos e valores
    printf("Atributos escolhidos:\n");
    printf("%s -> %s: %.2f | %s: %.2f\n", nomeAtributo(opcao1), carta1.Pais, valor1_c1, carta2.Pais, valor1_c2);
    printf("%s -> %s: %.2f | %s: %.2f\n", nomeAtributo(opcao2), carta1.Pais, valor2_c1, carta2.Pais, valor2_c2);

    // Mostrar soma dos atributos
    printf("Soma dos atributos: %.2f (%s) vs %.2f (%s)\n",
           soma1, carta1.Pais, soma2, carta2.Pais);

    // Resultado final
    if (soma1 == soma2) {
        printf("=== Empate! ===\n");
    } else if (soma1 > soma2) {
        printf("=== %s venceu! ===\n", carta1.Pais);
    } else {
        printf("=== %s venceu! ===\n", carta2.Pais);
    }

    return 0;
}
