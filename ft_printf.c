/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:33:36 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/28 13:25:46 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*    GUIA PARA AS CONVERSOES
c - printa um unico caracter
s - printa uma string (conjunto de caracteres)
p - um pointer tipo void tem de ser printado num formato hex
d - printa um numero decimal de base 10
i - print um int em base 10
u - print um numero unsigned decimal se base 10
x - printa um numero hex de base 16 em minusculas
X - printa um numero hex de base 16 em maiuscula
% - printa %
*/

int ft_printf(const char *)