#include <stdio.h>

int main(){

    
    //Movimento Da torre usando for
    printf("=== Movimento da Torre ===\n");
for (int i = 0; i < 5; i++)
{
    printf("direita\n");
}
 
// Movimento Bisco com while

printf("\n=== Movimento do Bispo ===\n");
int movimentoBispo = 5;
int ContadorBispo = 1;
while (ContadorBispo <= movimentoBispo)
{
    printf("Cima, Direita\n");
    ContadorBispo++;
}

// Movimento da Rainha usando do-while
    printf("\n=== Movimento da Rainha ===\n");

    int movimentoRainha = 8;
    int contadorRainha = 1;
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

// Movimento do cavalo usando loop

    int movimentoCavaloBaixo = 2;
    int movimentoCavaloEsquerda = 1;
    printf("\n=== Movimento do Cavalo ===\n");

        for (int i = 1; i <= movimentoCavaloBaixo; i++)
            printf("Baixo\n");
        {
            int ContadorEsquerda = 1;
            while (ContadorEsquerda <= movimentoCavaloEsquerda)
            {
                printf("Esquerda\n");
                ContadorEsquerda++;
            }
            
        }
        


    return 0;

}