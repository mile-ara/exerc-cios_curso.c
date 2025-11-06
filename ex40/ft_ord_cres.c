
#include <stdio.h>

int main(void)
{
    int n1, n2;
    
    printf("<<< Ordem em dois números >>>\n");
    printf("Me diga dois números e eu colocarei\nos dois em ordem crescente.\n");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("Os números em ordem sao %d e %d\n", n2, n1);
    }
    else if(n1 < n2)
    {
        printf("Os números em ordem sao %d e %d\n", n1, n2);
    }
    else
    {
        printf("Os números %d e %d sao iguais.\n", n1, n2);
    }
    return(0);
}