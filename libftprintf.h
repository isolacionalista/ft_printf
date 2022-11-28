/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:53:29 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/28 13:36:35 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

/*   O QUE E VA_LIST
as va_list's sao tipos de objectos completos que conseguem
conter toda a informacao necessaria dos macros va_start, va_copy
va_arg e va_end. se uma lista e criada, passada para outra funcao
e usada com o va_arg, qualquer subsequente da funcao tem de ser 
terminada com o va_end. e possivel passar um pointer para o objecto 
va_list e usar o objecto depois de a funcao retornar
------ap - uma instancia do va_list type
------tipo T - o tipo do proximo parametro na ap
*/


/* BIBLIOTECAS A INCLUIR
funcoes permitidas malloc, free, write e macros da va_list
para se conseguir usar os macros de va_list e preciso stdarg.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

//prototipos de funcoes


/*   O QUE E VA_ARG
este macro expande para uma expressao tipo T. Para poder usar
va_arg, o ap tem de ser inicializado com start ou copy, sem ser interrompido
por end. cada evocacao do macro arg modifica o ap para apontar 
para a proxima variavel do argumento
se o proximo argumento do ap nao for cmpativel com T, vai ter um
comportamento indefinido a nao ser que:
-------- um tipo seja int e o outro unsigned int
--------ou um tipo e um void pointer e o outro pointer e um caracter
*/

#endif