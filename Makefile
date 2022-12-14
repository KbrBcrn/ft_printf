# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 12:46:17 by kbeceren          #+#    #+#              #
#    Updated: 2022/08/14 12:46:18 by kbeceren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB		= ar rcs
RM = rm -rf
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
			ft_print_hexa.c \
			ft_print_ptr.c \
			ft_print_unsigned.c \
			ft_printf_utils.c \
			ft_printf.c \
			
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		ar rcs $@ $^

clean :
		$(RM) $(OBJS)

fclean : clean 
		$(RM) $(NAME)

re : fclean all

.c.o: $(SRCS)
		$(CC) $(FLAGS) -c -o $@ $<
