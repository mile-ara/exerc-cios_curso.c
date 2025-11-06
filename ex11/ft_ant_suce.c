
#include <stdio.h>

int main(void)
{
    int i, r1, r2;
    printf("<<<<< Antecessor e Sucessor >>>>>\n");
    printf("Digite um numero: ");
    scanf("%d", &i);

    r1 = i - 1; // pega o número que o usúario digitar e tira 1 para pegar a "antecessor"
    r2 = i + 1; // pega o número que o usúario digitar e acrescenta 1 para pegar o "sucessor"
    printf("Analisando o numero %i, seu antecessor é %i e seu sucessor é %i", i, r1, r2);
    return(0);
}