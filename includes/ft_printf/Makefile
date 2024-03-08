# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:29:36 by hbenaddi          #+#    #+#              #
#    Updated: 2023/11/30 20:02:42 by hbenaddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libftprintf.a

CC				= clang
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.

SRCS    		=	ft_printf.c \
					ft_printchar.c \
					print_pointer.c \

OBJS			=	$(SRCS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS} 
				ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS) 
fclean:			clean
				$(RM) $(NAME)	
re: fclean all

.PHONY: all, clean, fclean, re
