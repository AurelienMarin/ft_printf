# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 12:02:40 by aumarin           #+#    #+#              #
#    Updated: 2022/03/11 21:34:57 by aumarin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
		utils/num_utils.c \
		utils/hex_utils.c \
		utils/char_utils.c
OBJ = $(SRC:.c=.o)
C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	@echo "\033[0;33mcompiling... \033[0;37m"
	@gcc $(C_FLAGS)  -I . -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	@echo "\033[0;33mlinking... \033[0;37m"	
	@ar rcs $(NAME) $(OBJ)

bonus: ${OBJ}
	@ar rcs ${NAME} ${OBJ} 

clean:
	@echo "\033[0;33mdeleting objects... \033[0;37m"
	@rm -f $(OBJ)
	@echo "\033[0;33mdone \033[0;37m"

fclean: clean
	rm -f $(NAME)

re: fclean all