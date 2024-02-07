# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgomes-n <lgomes-n@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 17:23:01 by lgomes-n          #+#    #+#              #
#    Updated: 2023/06/30 16:10:32 by lgomes-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./

INCLUDES =  ./
CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a
FT_PRINTF		= ft_printf.c printf_utils.c
OBJ = $(FT_PRINTF:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@echo "Linking $(NAME)"
	@cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)

$(LIBFT): $(LIBFT_DIR)
	@echo "Compiling libft"
	@$(MAKE) -C $(LIBFT_DIR)

%.o: $(SRC)/%.c
	$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $@
	@echo "Compiling $<"

clean:
	rm -f $(OBJ) 

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME) 

re: fclean all


.PHONY: all clean fclean re 
