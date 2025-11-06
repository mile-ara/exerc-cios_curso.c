#include <stdio.h>

int main(void)
{
    float pesoTerra, pesoPlaneta;
    int opcao;

    printf("Seu peso na Terra (kg) = ");
    scanf("%f", &pesoTerra);

    printf("Escolha um planeta:\n");
    printf("========================\n");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    printf("========================\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    // Usei switch para calcular o peso conforme o planeta escolhido
    switch(opcao) {
        case 1: // Mercúrio
            pesoPlaneta = pesoTerra * 0.37; // Fator de gravidade de Mercúrio
            printf("No planeta Mercurio seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        case 2: // Vênus
            pesoPlaneta = pesoTerra * 0.88;
            printf("No planeta Venus seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        case 3: // Marte
            pesoPlaneta = pesoTerra * 0.38;
            printf("No planeta Marte seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        case 4: // Júpiter
            pesoPlaneta = pesoTerra * 2.64;
            printf("No planeta Jupiter seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        case 5: // Saturno
            pesoPlaneta = pesoTerra * 1.15;
            printf("No planeta Saturno seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        case 6: // Urano
            pesoPlaneta = pesoTerra * 1.17;
            printf("No planeta Urano seu peso seria %.2f kg.\n", pesoPlaneta);
            break;

        default: // Caso o usúario digite uma opçao nao mencionada no switch
            printf("Opcao invalida!\n");
    }

    return(0);
}