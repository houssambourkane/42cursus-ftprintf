# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 21:35:58 by hbourkan          #+#    #+#              #
#    Updated: 2021/11/27 15:20:06 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

FLAGS = -Wall -Wextra -Werror

CFILES = ft_printf.c ft_display.c ft_calcul.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(CFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re : fclean all
