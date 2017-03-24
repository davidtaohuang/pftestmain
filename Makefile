# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuang <dhuang@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/05 21:53:35 by dhuang            #+#    #+#              #
#    Updated: 2017/01/11 16:20:02 by dhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean re testing

vpath %.h includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CTFLAGS = -fsanitize=address

NAME = testmain

all: $(NAME)

$(NAME): main.c
		@echo "Creating testmain..."
		@$(CC) $(LDFLAGS) $(CTFLAGS) $(GFLAGS) main.c -o $@ -L ./ -lftprintf
		@echo "All done!"

fclean: 
		@echo "Deleting $(NAME)..."
		@rm -rf $(NAME)

re: fclean all
