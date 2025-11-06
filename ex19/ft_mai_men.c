
#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    int m = (n1>n2) ?n1:n2;
    printf("Entre %i e %i, o maior foi %i", n1, n2, m);
    return(0);
}