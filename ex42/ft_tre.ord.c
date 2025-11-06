
#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("<<< Tres valores em ordem >>>\n");
    printf("Me diga tres numeros e eu colocarei\neles em ordem para voce.\n");

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    printf("Terceiro numero: ");
    scanf("%d", &n3);

    printf("-------------------------------\n");

    // Condições aninhadas
    if (n1 <= n2 && n1 <= n3)
    {
        if (n2 <= n3)
            printf("Ordem crescente: %d, %d, %d\n", n1, n2, n3);
        else
            printf("Ordem crescente: %d, %d, %d\n", n1, n3, n2);
    } 
    else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3)
            printf("Ordem crescente: %d, %d, %d\n", n2, n1, n3);
        else
            printf("Ordem crescente: %d, %d, %d\n", n2, n3, n1);
    } 
    else { // n3 é o menor
        if (n1 <= n2)
            printf("Ordem crescente: %d, %d, %d\n", n3, n1, n2);
        else
            printf("Ordem crescente: %d, %d, %d\n", n3, n2, n1);
    }

    return 0;
}
