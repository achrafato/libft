# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 10:52:54 by aibn-che          #+#    #+#              #
#    Updated: 2023/11/12 15:38:36 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MSRCS := 	ft_atoi.c            ft_bzero.c            ft_calloc.c   \
        	ft_isalnum.c        ft_isalpha.c        ft_isascii.c    \
        	ft_isdigit.c        ft_isprint.c        ft_memchr.c        \
        	ft_memcmp.c            ft_memcpy.c            ft_memmove.c    \
        	ft_memset.c            ft_strchr.c            ft_strdup.c        \
        	ft_strjoin.c        ft_strlcat.c        ft_strlcpy.c    \
        	ft_strlen.c            ft_strncmp.c        ft_strnstr.c    \
        	ft_strrchr.c        ft_strtrim.c        ft_substr.c        \
        	ft_tolower.c        ft_toupper.c        ft_itoa.c        \
        	ft_strmapi.c        ft_striteri.c        ft_putchar_fd.c    \
        	ft_putstr_fd.c        ft_putendl_fd.c        ft_putnbr_fd.c    \
        	ft_split.c

BSRCS :=	ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c\
			ft_lstlast_bonus.c	ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c

MOBJS = $(MSRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

rm = rm -f

all : $(NAME)

%.o :%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(MOBJS)
	ar rcs $(NAME) $(MOBJS)

bonus : $(NAME) $(BOBJS) $(MOBJS)
	ar rcs $(NAME) $(BOBJS) $(MOBJS)

clean :
	$(rm) $(MOBJS) $(BOBJS)

fclean : clean
	$(rm) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
