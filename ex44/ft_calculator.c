#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("<<< Calculadora >>>\n");
    printf("VALOR 1 = ");
    scanf("%d", &n1);
    printf("VALOR 2 = ");
    scanf("%d", &n2);

    printf("=======================\n");
    printf("1\tAdição\n");
    printf("2\tSubtração\n");
    printf("3\tMultiplicação\n");
    printf("4\tDivisão\n");
    printf("=======================\n");
    printf("Digite sua opção => ");
    scanf("%d", &n3);

    printf("----------------------------\n");

    switch (n3) {
        case 1:
            printf("O resultado de %d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case 2:
            printf("O resultado de %d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case 3:
            printf("O resultado de %d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case 4:
            switch (n2 != 0) {  // dentro do switch, tratamos divisão por zero
                case 1:
                    printf("O resultado de %d / %d = %.2f\n", n1, n2, (float)n1 / n2);
                    break;
                case 0:
                    printf("Erro: divisão por zero!\n");
                    break;
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}