NAME = libftprintf.a
FILES = 
CFLAGS = -Wall -Wextra -Werror 
OFILES = $(FILES :.c=.o)
all = $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) (OFILES)

%.o : %.c $(HEADER)
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OFILES)
.PHONY: all clean fclean re