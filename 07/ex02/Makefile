# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvarlamo <bvarlamo@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 18:52:25 by bvarlamo          #+#    #+#              #
#    Updated: 2022/05/20 11:15:57 by bvarlamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	test

SRCS	:=	main.cpp \

OBJS	:=	${SRCS:.cpp=.o}

CC		:=	c++

CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all