# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruthann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/04 21:28:43 by pruthann          #+#    #+#              #
#    Updated: 2020/08/12 20:44:28 by pruthann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c ft_memccpy.c ft_memcpy.c ft_strlen.c ft_atoi.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_memchr.c ft_memmove.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strncmp.c ft_strdup.c ft_calloc.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcat.c ft_toupper.c

OBJS	= ${SRCS:.c=.o}

LIB	= libft.h

NAME	= libft.a

CC	= gcc

RM	= rm -f

AR	= ar rc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I${LIB} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
