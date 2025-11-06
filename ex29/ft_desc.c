
#include <stdio.h>

int main(void)
{
    float n, d, total;
    printf("<<< Consumidor ganha desconto >>>\n");
    printf("Qual foi o valor total das compras? ");
    scanf("%f", &n);

    if(n >= 500)
    {
        d = n * 0.10; // calcula 10% de desconto (0.10 representa 10%)
        total = n - d; // subtraio o desconto do valor original para obter o total a pagar
        printf("------------------------\n");
        printf("Voce comprou R$.2%f na nossa loja.", n);
        printf("========== ATENÇÃO ==========\n");
        printf("Por fazer mais de R$500 em compras, voce vai receber R$%.2f de desconto!\n", d);
        printf("O valor final a pagar é R$%.2f\n", total);
        printf("Volte sempre!\n");
    }
    else
    {
        printf("Voce comprou R$%f na nossa loja.\n", n);
        printf("Volte sempre!");
    }
    return(0);
}