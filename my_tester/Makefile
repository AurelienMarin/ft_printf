# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 15:21:18 by cberganz          #+#    #+#              #
#    Updated: 2022/03/11 21:35:00 by aumarin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= tester

FLAGS		= -Wall -Wextra -Werror -g 

SRC		= tester.c

ARCHIVE		= ../libftprintf.a

${NAME}: ${SRC}
	$(MAKE) -C ./../
	gcc -o ${NAME} ${SRC} ${ARCHIVE}

all: ${NAME}

clean:
		$(MAKE) clean -C ./../
		rm -f ${OBJS}

fclean: clean
		$(MAKE) fclean -C ./../
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
