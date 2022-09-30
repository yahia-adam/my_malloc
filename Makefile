##
## EPITECH PROJECT, 2022
## my_malloc
## File description:
## create my own malloc
##

SRC	=	src/main_my_malloc.c \
		src/my_malloc.c\

SRC_TEST =	

OBJ	=	$(SRC:.c=.o)

BINARY_NAME	=	my_malloc

MAKE 	=	make

INCLUDE	=	include/

LIB	=		my

LIB_MY	=	lib/my

LIB_MY2	=	lib

CPPFLAGS	=	-I./$(INCLUDE)

LDFLAGS	=	-L $(LIB_MY2) -l$(LIB)

all:		Make NAME

NAME:
			gcc $(SRC) \
			-o $(BINARY_NAME) $(CPPFLAGS) $(LDFLAGS) -l$(LIB)

tests_run: Make
		gcc -o test $(SRC_TEST) ./tests/test_my_malloc.c \
		--coverage -lcriterion $(CPPFLAGS) $(LDFLAGS) -l$(LIB)
		./test

Make:
			$(MAKE) -C $(LIB_MY)

clean_all:
			rm -f $(OBJ)
			make fclean -C $(LIB_MY)
			rm -f $(BINARY_NAME)
			rm -f test
			rm -f *.gcda
			rm -f *.gcno
			rm -f *~
			rm -f *.o

clean:
			rm -f $(OBJ)

fclean:		clean
			make fclean -C $(LIB_MY)
			rm -f $(BINARY_NAME)

re:			fclean all
			rm -f $(OBJ)
