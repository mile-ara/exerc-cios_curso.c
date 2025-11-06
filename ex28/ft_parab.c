
#include <stdio.h>

int main(void)
{
    float n1, n2, med;
    printf("<<< Bons alunos merecem parabéns >>>\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    
    med = (n1 + n2) / 2;
    
    if(med >= 7)
    {
        printf("MEUS PARABENS! A sua média final foi: %.2f\n", med);
    }
    else // só entra no else se a condição do if for falsa
    {
        printf("A sua nota final foi: %.2f\n", med);
    }
    return(0);
}