# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 18:21:38 by hbenaddi          #+#    #+#              #
#    Updated: 2024/02/15 18:21:44 by hbenaddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./includes/libft
FT_PRINTF_DIR = ./includes/ft_printf
SRC_DIR = ./src
INCLUDES = -I ./includes/libft -I ./includes/ft_printf

SRC_SERVER = $(SRC_DIR)/server.c
SRC_CLIENT = $(SRC_DIR)/client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all: $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

$(NAME_SERVER): $(OBJ_SERVER) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJ_SERVER) -L$(LIBFT_DIR) -lft -L$(FT_PRINTF_DIR) -lftprintf

$(NAME_CLIENT): $(OBJ_CLIENT) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJ_CLIENT) -L$(LIBFT_DIR) -lft -L$(FT_PRINTF_DIR) -lftprintf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(FT_PRINTF_DIR) clean
	rm -f $(SRC_DIR)/*.o

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re
