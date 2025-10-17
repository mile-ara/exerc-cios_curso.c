/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ran.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:27:15 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/10/17 18:55:54 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int nal = rand() % 5 + 1;
    int n;
    
    printf("Vou pensar em um numero aleatorio entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d", &n);
    printf("Eu pensei no numero %d e voce pensou no %d", nal, n);
}