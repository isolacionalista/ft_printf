/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:33:36 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/28 14:15:31 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*    GUIA PARA AS CONVERSOES
c - printa um unico caracter (putchar)
s - printa uma string (conjunto de caracteres) (putstr)
p - um pointer tipo void tem de ser printado num formato hex
d - printa um numero decimal de base 10
i - print um int em base 10
u - print um numero unsigned decimal se base 10
x - printa um numero hex de base 16 em minusculas
X - printa um numero hex de base 16 em maiuscula
% - printa %
*/

/*
em todas as funcoes auxiliar para o printf,
e preciso ter um pointer len (indica para o tamanho)
para ser possivel a funcao dar a contagem correcta de
caracteres no output
*/

int ft_printf(const char *str, ...)