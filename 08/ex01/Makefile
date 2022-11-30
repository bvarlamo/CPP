# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 12:59:52 by bvarlamo          #+#    #+#              #
#    Updated: 2022/05/23 09:58:31 by bvarlamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= ex01

SRCS	:=	main.cpp Span.cpp\

CC		:=	c++

CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${SRCS}
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all