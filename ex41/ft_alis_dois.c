
#include <stdio.h>

int main(void)
{
    int anoNascimento, idade;
    int anoAtual = 2025; // Pode mudar se quiser atualizar depois

    // Entrada
    printf("Em que ano voce nasceu? ");
    scanf("%d", &anoNascimento);

    // Cálculo da idade
    idade = anoAtual - anoNascimento;

    // Saída da idade
    printf("Sua idade atual é de %d anos.\n", idade);

    // Condições aninhadas
    if (idade > 18)
    {
        printf("Seu alistamento foi em %d.\n", anoNascimento + 18);
        printf("Já se passaram %d anos desde o alistamento.\n", idade - 18);
    }
    else
    {
        if (idade < 18)
        {
            printf("Seu alistamento será em %d.\n", anoNascimento + 18);
            printf("Ainda faltam %d anos para o alistamento.\n", 18 - idade);
        }
        else // idade == 18
        {
            printf("Voce completa 18 anos exatamente em %d.\n", anoAtual);
            printf("Vá se alistar!\n");
        }
    }

    return 0;
}