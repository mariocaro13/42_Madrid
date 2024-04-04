CC = cc
CFLAGS = -Wall -Wextra -Werror
DIR = -I$(LIBDIR)

LIBDIR = ../../ft_printf
LIBNAME = ftprintf

TEST = test_printf.c

TOBJECTS = $(TEST:.c=.o)

test: $(TOBJECTS)
	$(CC) $(CFLAGS) $(DIR) -o test_out $(TOBJECTS) -L$(LIBDIR) -l$(LIBNAME)
	./test_out

tclean:
	rm -f $(TOBJECTS) test_out

.DEFAULT_GOAL := test

.PHONY: test tclean
.SILENT:
