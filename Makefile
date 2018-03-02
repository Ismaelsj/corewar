# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 13:39:55 by isidibe-          #+#    #+#              #
#    Updated: 2018/03/01 13:31:13 by isidibe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRC = $(SRCDIR)/main.c $(SRCDIR)/ft_error.c $(SRCDIR)/ft_free.c\
$(SRCDIR)/ft_coding_byte.c $(SRCDIR)/ft_filup_arg.c $(SRCDIR)/ft_opcode.c\
$(SRCDIR)/ft_init.c $(SRCDIR)/ft_put_in_buff.c

INCLUDES = includes

SRCDIR = srcs

OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

OBJDIR = objs

NAME = u_asm

LIB = libft/libft.a

CC = gcc -g

CFLAGS = -Wall -Wextra -Werror

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) -c -o $@ $< $(CFLAGS) -I $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) ./Libft/libft.a -I $(INCLUDES)

clean:
	@rm -rf $(OBJDIR)
	@rm -rf u_asm.dSYM
	@make clean -C ./libft

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./libft

re: fclean all
