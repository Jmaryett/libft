# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chudapak <chudapak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 20:03:11 by jmaryett          #+#    #+#              #
#    Updated: 2021/04/28 20:40:28 by chudapak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
	
HEADER	= libft.h

SRCS	= ft_strlen.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_strchr.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_calloc.c \
		 ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memccpy.c \
		 ft_memmove.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strrchr.c \
		 ft_strncmp.c \
		 ft_strnstr.c \
		 ft_atoi.c \
		 ft_strdup.c \
		 ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 


OBJS	= ${SRCS:.c=.o}

RM	= rm -f

AR	= ar rc

CFLAGS 	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}
	
${NAME}:	${OBJS} ${HEADER}
			${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		
re:		fclean all

.PHONY: re clean fclean all 