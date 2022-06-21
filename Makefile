##
## EPITECH PROJECT, 2022
## B-CPE-200-MPL-2-1-dante-guillaume.lemoine
## File description:
## Makefile
##

LIB 	=	./lib/libmy.a

all: $(LIB)
	make -C generator
	make -C solver

$(LIB):
	@make -C ./lib/my

clean:
	@make clean -C generator
	@make clean -C solver
	@make clean -C lib/my
	@echo "clean success"

fclean: clean
	@make fclean -C generator
	@make fclean -C solver
	@make fclean -C lib/my
	@echo "fclean success"

re: fclean all
