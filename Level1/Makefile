# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 16:21:55 by jthanikp          #+#    #+#              #
#    Updated: 2023/02/28 17:00:46 by jthanikp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FLAGS	= -Wall -Wextra -Werror
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

ิBONUS_SRCS	=ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS	= $(SRCS:.c=.o)

BOBJS	= $(BONUS_SRCS:.c=.o)

all		= $(NAME)

%o:%c
		gcc $(FLAGS) -c $< -o $@

$(NAME):$(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS)
		ar -rcs $(NAME) (BOBJS)

clean:
		rm -f $(OBJS) $(BOBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	clean fclean re all bonus