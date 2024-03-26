NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_printf.c \
	write.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "$(NAME) has been created successfully!"

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

test: 
	@$(MAKE) -C ../Test/Printf test

tclean:
	@$(MAKE) -C ../Test/Printf tclean

.DEFAULT_GOAL := all
.PHONY: all clean fclean re test tclean
