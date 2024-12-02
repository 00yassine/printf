NAME = libftprintf.a

FILES = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_hexaput.c ft_putadress.c ft_unsputnbr.c

CFLAGS = -Wall -Wextra -Werror 

OFILES = $(FILES:.c=.o)

first : $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean first

.SECONDARY: $(OFILES)
.PHONY: first clean fclean re