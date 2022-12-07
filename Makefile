# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 00:37:19 by areifoun          #+#    #+#              #
#    Updated: 2022/11/23 05:28:58 by areifoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 
AR = ar rc
RM = rm -f 
FLG = -Wall -Wextra -Werror
FILES = ft_strlen.c \
	ft_isalpha.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strchr.c \
	ft_isprint.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_strjoin.c 
	
OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
%.o : %.c libft.h
	$(CC) $(FLG) -o $@ -c $<

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean