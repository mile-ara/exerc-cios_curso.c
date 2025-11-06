
#include <stdio.h>

int main(void)
{
    int ano_nasc, idade, ano_atual;
    ano_atual = 2025;
    printf("Atualmente estamos no ano de 2025.\n");
    printf("Em que ano voce nasceu? ");
    scanf("%d", &ano_nasc);
    
    idade = ano_atual - ano_nasc;
    
    if(idade >= 18)
    {
        printf("Sua idade atual é de %d anos\n", idade);
        printf("Voce ja fez 18 anos. Espero que voce tenha se alistado.\n");
    }
        else
        {
            printf("Sua idade atual é de %d anos\n", idade);
            printf("Voce ainda nao tem 18 anos. Não pode se alistar.\n");
        }
    return(0);
}