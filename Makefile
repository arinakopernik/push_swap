# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 13:14:33 by lbrianna          #+#    #+#              #
#    Updated: 2022/02/11 14:58:55 by lbrianna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRCS = push_swap.c	check_arguments.c push.c\
		reverse.c 	rotate.c 		swap.c\
		parser.c	parser_stack.c 	simple.c\
		sorter.c 	sorter1.c 	sorter2.c\
		sorter3.c\

SRCS_BONUS = check_arguments.c push.c\
		reverse.c 	rotate.c 		swap.c\
		parser.c	parser_stack.c 	simple.c\
		sorter.c 	sorter1.c 	sorter2.c\
		sorter3.c checker.c\
		
HEADER = push_swap.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIB = libft/libft.a

OBJS = $(SRCS:%.c=%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

all:	libft $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@

libft: 
	make -C libft/

$(NAME) : 	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

bonus: libft $(NAME_BONUS)

$(NAME_BONUS) : $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIB) -o $(NAME_BONUS)

clean :
	make -C libft/ clean
	$(RM) $(OBJS) $(OBJS_BONUS)
	
fclean : clean
	make -C libft/ fclean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all

.PHONY : all clean fclean re libft bonus