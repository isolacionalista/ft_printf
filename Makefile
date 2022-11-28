# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 12:34:53 by imendonc          #+#    #+#              #
#    Updated: 2022/11/28 16:01:05 by imendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#indica o nome do programa e onde vai buscar as coisas

NAME		= libftprintf.a

SRC			= ft_printf.c forcands.c

OBJ			= $(SRC:.c=.o)


#definicao dos parametros, compiler, flags etc

CC				= cc

RM				= rm -f

CFLAGS		= -Wall -Werror -Wextra

#definicao dos comandos, o que fazem e a que ficheiros

$(NAME):	$(OBJ)
				ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all $(NAME)

#comando phony melhora a performance do makefile
#para que os comandos nao entrem em conflito com possiveis ficheiros
#ou outroc comandos pre defenidos 

.PHONY:		all clean fclean re

#phony e opcional no makefile