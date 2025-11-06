
#include <stdio.h>

int main(void)
{
    float vel, cal;
    printf("======== TABELA DE PREÇOS ========\n");
    printf("Viagens até 200km\tR$0.50/km\n");
    printf("A partir de 200km\tR$0.35/km\n");
    printf("----------------------------------\n");
    printf("Distancia total da viagem, em Km: ");
    scanf("%f", &vel);
    
    if(vel >= 200)
    {
        cal = vel * 0.35;
        printf("Uma viagem de %.1f Km vai custar R$0.35/Km.\n", vel);
        printf("Valor total R$%.1f\n", cal);
    }
        else
        {
            cal = vel * 0.50;
            printf("Uma viagem de %.1f Km vai custar R$0.50/Km.\n", vel);
            printf("Valor total: R$%.1f\n", cal);
        }
    return(0);
}