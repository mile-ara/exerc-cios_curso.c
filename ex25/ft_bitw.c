
#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("<<< Operadores Bitwise >>>\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    int d = n1 & n2; 
    int c = n1 | n2;
    int de = n1 ^ n2;
    printf("------ OPERAÇOES BITWISE ------\n");
    printf("Calculando %i & %i é igual a %i\n", n1, n2, d);
    printf("Calculando %i | %i é igual a %i\n", n1, n2, c);
    printf("Calculando %i ^ %i é igual a %i\n", n1, n2, de);
    return(0);
}