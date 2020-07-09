# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmousset <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/11 09:35:21 by jmousset          #+#    #+#              #
#    Updated: 2020/07/09 12:09:42 by julien           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl

FLAGS = -Wall -Wextra -Werror

SRCS = get_next_line.c\
	   main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -g -c $(SRCS)
	gcc $(FLAGS) $(OBJS) -o $(NAME) libft/libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
