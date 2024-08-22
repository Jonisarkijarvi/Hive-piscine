# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/18 17:26:43 by jsarkija          #+#    #+#              #
#    Updated: 2024/08/18 17:27:39 by jsarkija         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRCS = convert.c
OBJS = $(SRCS:.c=.o)
NAME = rush-02
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) -Wall -Wextra -Werror $(SRCS) -o $(NAME)
	
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re
