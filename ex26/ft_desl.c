
#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("<<< Operadores de Deslocamento >>>\n");
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite o deslocamento: ");
    scanf("%i", &n2);
    int di = n1 >> n2; // usado para descolar o número para a direita de n1 para n2
    int es = n1 << n2;
    printf("------ OPERAÇOES SHIFT ------\n");
    printf("Calculando %i >> %i é igual a %i\n", n1, n2, di);
    printf("Calculando %i << %i é igual a %i\n", n1, n2, es);
    return(0);
}