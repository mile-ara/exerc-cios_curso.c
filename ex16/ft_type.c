
#include <stdio.h>

int main(void)
{
    int x = 65;
    printf("Eu tenho %c", (char)x); // colocando esse (char) na frente da minha variavel que é do tipo inteiro,
    // consigo força-la que nessa linha me de o resultado do tipo char, entao me mostrará o 'A' que tem o valor 65 na tabela ascii
    return(0);
}