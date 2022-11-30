# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bvarlamo <bvarlamo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 18:52:25 by bvarlamo          #+#    #+#              #
#    Updated: 2022/05/12 18:34:26 by bvarlamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	omg

SRCS	:=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp intern.cpp\

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