# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 17:39:56 by cleguina          #+#    #+#              #
#    Updated: 2023/05/19 18:12:36 by cleguina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_strlen.c ft_itoa.c \
	ft_utoa.c ft_printnmbr.c ft_printunsig.c ft_printhex.c ft_countdigit.c \
	ft_printptr.c ft_strchr.c 


OBJ = $(SRC:.c=.o)

HDR = ft_printf.h 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all
	
.PHONY: re all clean fclean 
