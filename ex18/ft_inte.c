
#include <stdio.h>

int main(void)
{
    int a = 4, b = 8;
    int c = (a>b) ?1:2; // a interrogaçao (?) é um operador ternário. Um jeito de deixar o codigo mais curto e direto, sem usar o if e else.
    //Entao é dividido em 3 partes: a condição, o resultado se for verdadeiro e o resultado se for falso. O '?' separa o resultado de se for verdadeiro, e o ':' separa o resultado se for falso.
    printf("O resultado é %i", c);
    return(0);
}