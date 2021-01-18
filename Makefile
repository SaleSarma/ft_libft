#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 15:38:36 by svrcelj           #+#    #+#              #
#    Updated: 2021/01/18 14:19:17 by svrcelj          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang

FLAGS		=	-Wall -Wextra -Werror

NAME		=	libft.a

SRCS		=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_split.c \
				ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
				ft_itoa.c ft_memcpy.c ft_strchr.c ft_strlcpy.c \
				ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memccpy.c \
				ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
				ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c  \
				ft_strjoin.c ft_strmapi.c ft_strtrim.c

HEADERS		=	.

OBJECTS		=	${SRCS:.c=.o}

all:			$(NAME)

.c.o:
				${CC} ${FLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

$(NAME) :		${OBJECTS}
				ar rc libft.a ${OBJECTS}

clean:
				rm -rf ${OBJECTS}

fclean:			clean
				rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
