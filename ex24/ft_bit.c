
#include <stdio.h>

int main(void)
{
    int n = 15 & 5; // compara os números em binário e deixa ligado (1) só onde os dois têm 1
    printf("O resultado é %i", n);
    return(0);
}

/*int main(void)
{
    int n = 27 | 17; // compara os números em binário e deixa ligado (1) onde pelo menos um dos dois tem 1
    printf("O resultado é %i", n);
    return(0);
}*/
//
/*int main(void)
{
    int n = 15 ^ 7; // compara os números em binário e deixa ligado (1) só onde os dois bits são diferentes
    printf("O resultado é %i", n);
    return(0);
}*/