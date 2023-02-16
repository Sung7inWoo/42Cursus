NAME = libft.a

SRCS = ft_isalpha.c\
		ft_atoi.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strlcat.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c ft_strncmp.c\

OBJS := $(SRCS:.c=.o)



all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all clean


.PHONY: clean fclean all re