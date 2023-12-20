# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 03:59:47 by fpasteau          #+#    #+#              #
#    Updated: 2017/06/09 05:37:08 by fpasteau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

INC = . ./libft

FLAGS = -Wall -Wextra -Werror

SRC = ./check.c ./drydi.c ./fillit.c ./ft_allocfillit.c ./parseur.c \
	  ./read.c ./read.c ./thepgmlp.c

OBJ = ./check.o ./drydi.o ./fillit.o ./ft_allocfillit.o ./parseur.o \
	  ./read.o ./thepgmlp.o

all: $(NAME)

$(NAME):
	@make -C ./libft
	@$(CC) -c $(FLAGS) $(SRC)
	@echo "\033[0;32m=== Compiling Fillit : .c\t\tDONE"
	@$(CC) $(OBJ) ./Libft/libft.a -o $(NAME)
	@echo "\033[0;32m=== Compiling ./Fillit\t\t\tDONE"

clean:
	@rm -f $(OBJ)
	@echo "\033[0;31m=== Deleting Fillit : .o\t\tDONE"
	@make clean -C ./Libft

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;31m=== Deleting ./Fillit\t\t\tDONE"
	@make fclean -C ./Libft

re: fclean all
