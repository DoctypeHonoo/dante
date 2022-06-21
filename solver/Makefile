##
## EPITECH PROJECT, 2022
## B-CPE-200-MPL-2-1-dante-guillaume.lemoine
## File description:
## Makefile
##

SRC		=	$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror

BIN		=	solver

all: $(BIN)

$(BIN): $(OBJ)
	@$(CC) $(OBJ) -o $(BIN) -L../lib -lmy
	@echo "Make success"

clean:
	@$(RM) $(OBJ)
	@echo "clean success"

fclean: clean
	@$(RM) $(BIN)
	@echo "fclean success"

re: fclean all
