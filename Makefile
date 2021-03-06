CC=gcc
FLAG=-Wall -Wextra -Werror
LIB_DIR=./libft
LIB=./libft/libft.a
EXEC=fillit
SRC=src/fillit.c \
	src/error.c \
	src/get_next_line.c

all:$(EXEC)

$(EXEC) :$(SRC)
		@(cd $(LIB_DIR) && $(MAKE))
		$(CC) $(FLAG) $(SRC) $(LIB) -o $(EXEC)

clean:
	@(cd $(LIB_DIR) && $(MAKE) $@)

fclean: clean
		@(cd $(LIB_DIR) && $(MAKE) $@)
		rm -rf $(EXEC)

re: fclean all

.PHONY : all, clean, fclean, re
