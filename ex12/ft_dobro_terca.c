
#include <stdio.h>

int main(void)
{
    int n, d;
    float t;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    d = n * 2; // pegar o dobro do número digitado
    t = (float) n / 3; // (coerçao), to forçando a linguagem c a considerar essa minha variavel n como do tipo float para essa equaçao
    printf("Analisando o numero %d, seu dobro é %d, e sua terça parte é %.2f\n", n, d, t);
    return(0);
}