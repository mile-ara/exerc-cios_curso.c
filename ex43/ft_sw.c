
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    switch(n) // switch é usada para escolher entre várias opcoes com base no valor de uma expressao.
    // switch só serve para dados do tipo int e char.
    // o switch compara o valor de uma expressao (int ou char) com valores fixos definidos nos cases.
    {
        case 1: // os dois pontos é usado porque o case é um rótulo, nao um comando
                printf("Um\n");
                break; // serve para impedir o programa de continuar executando os próximos casos depois que um case for verdadeiro.
        case 2:
                printf("Dois\n");
                break;
        case 3:
                printf("Tres\n");
                break;
        case 4:
                printf("Quatro\n");
                break;
        default:
                printf("ERRO!\n");
                break; // opcional porque o default é o ultimo caso, mas uso por boa prática.
    }
    return(0);
}