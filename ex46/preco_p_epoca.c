#include <stdio.h>

int main()
{
    float preco, precoFinal; // preco = valor original; precoFinal = valor ajustado
    int opcao; // Guarda a escolha do usuário (1 a 5)

    printf("Digite o preco de um produto: R$");
    scanf("%f", &preco);

    printf("Escolha um periodo:\n");
    printf("============================\n");
    printf("1 - Carnaval [+10%%]\n");
    printf("2 - Ferias escolares [+20%%]\n");
    printf("3 - Dia das criancas [+5%%]\n");
    printf("4 - Black Friday [-30%%]\n");
    printf("5 - Natal [-5%%]\n");
    printf("============================\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    // Usei o switch para calcular o novo preço de acordo com a escolha
    switch(opcao) {
        case 1: // Carnaval - aumento de 10%
            precoFinal = preco * 1.10; // 1.10 = 100% (preço normal) + 10% de aumento
            printf("No Carnaval, o preço do produto vai para R$%.2f\n", precoFinal);
            break;

        case 2: // Férias escolares - aumento de 20%
            precoFinal = preco * 1.20; // 1.20 = 100% + 20% = preço + 20%
            printf("Na epoca das ferias, o preco do produto vai para R$%.2f\n", precoFinal);
            break;

        case 3: // Dia das Crianças - aumento de 5%
            precoFinal = preco * 1.05; // 1.05 = 100% + 5%
            printf("No Dia das Criancas, o preco do produto vai para R$%.2f\n", precoFinal);
            break;

        case 4: // Black Friday - desconto de 30%
            precoFinal = preco * 0.70; // 0.70 = 100% - 30% = preço com 30% de desconto
            printf("Na Black Friday, o preco do produto vai para R$%.2f\n", precoFinal);
            break;

        case 5: // Natal - desconto de 5%
            precoFinal = preco * 0.95; // 0.95 = 100% - 5%
            printf("No Natal, o preco do produto vai para R$%.2f\n", precoFinal);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return(0);
}