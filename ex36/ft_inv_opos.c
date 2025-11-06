
#include <stdio.h>

int main(void)
{
    float n, cal;
    printf("Digite um número: ");
    scanf("%f", &n);
    
    if(n < 0)
    {
        cal = n * -1; // qualquer número negativo multiplacdo por outro numero negativo, dá positivo
        // "1" porque todo número multiplicado por 1 é ele mesmo
        printf("O oposto de %.1f é igual a %.1f\n", n, cal);
    }
        else
        {
            cal = 1 / n; // para calcular o inverso do numero é so dividir 1 pelo numero que queremos
            printf("O inverso do número %.1f é igual a %.1f\n", n, cal);
        }
    return(0);
}