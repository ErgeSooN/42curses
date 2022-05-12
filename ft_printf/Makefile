# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 17:02:55 by ayaman            #+#    #+#              #
#    Updated: 2022/05/12 17:09:31 by ayaman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	:= libftprintf.a
CC		:= gcc
CFLAGS  := -Wall -Wextra -Werror -I. -c
FILES   := $(shell find . -type f -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re