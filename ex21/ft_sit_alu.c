
#include <stdio.h>

int main(void)
{
    float n1, n2, m;
    printf("<<<<< Situação do Aluno >>>>>\n");
    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    m = (n1 + n2) / 2;
    printf("A média do aluno foi %.1f\n", m);
    printf("A situaçao é %s\n", (m >= 7) ?"Aprovado":"Reprovado");
    return(0);
}