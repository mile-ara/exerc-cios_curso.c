
#include <stdio.h>

int main(void)
{
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))// para um ano ser bissexto ele tem que ser divisível por 4, e nao pode ser divisível por 100, ou entao ele é divisível por 400
        printf("O ano %d é bissexto!\n", ano);
    else
        printf("O ano %d não é bissexto.\n", ano);
    
    return 0;
}