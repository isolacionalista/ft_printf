/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:11:58 by imendonc          #+#    #+#             */
/*   Updated: 2022/12/02 13:40:35 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
para a conversao p
p - um pointer tipo void tem de ser printado num formato hex
*/

/*
ver as definicoes de hexa e bases 16 no ficheiro forhexa.c
*/

/*
e necessario ter uma versao da funcao para hexadecimais nesta
flag p por cause do tipo de variaveis. neste caso do pointer, 
e preciso ter um int que seja maior e com mais valor possivel
*/

static void hexa_forp(size_t nbr, int *len)
{
    char *base;

    base = "0123456789abcdef";
    if (nbr < 16)
        ft_putchar(base[nbr % 16], len);
    else
    {
        hexa_forp((nbr / 16), len);
        hexa_forp((nbr % 16), len);
    }
}

