##
## 		W O R K S H O P  M A K E F I L E
##
## Corentin COUTRET-ROZET
## https://github.com/sheiiva/Workshop_Makefile
##
##

NAME 	= 	critests

CC		= 	gcc
LD		=	$(CC)
LIB			=	lib
PRINT		=	@echo -e
RM			=	@rm -f

ADD_COVERAGE	=	'CFLAGS	+=	--coverage'
ADD_LCRITERION	=	'LDLIBS	+=	-lcriterion'

TEST_SRC		=	sources/
REC_FUNC		=	generic/

ROOT_PATH		=	../
I_PATH			=	include/
SOURCE_PATH		=	$(ROOT_PATH)sources/
SOURCE_LIB		= 	$(SOURCE_PATH)libsrc/
SOURCE_I_PATH	=	$(ROOT_PATH)$(I_PATH)

INCLUDES			=	-I./$(I_PATH) 				\
						-I./$(SOURCE_I_PATH)

override CFLAGS	    +=	-W -Wall -Wextra -Wextra $(INCLUDES) --coverage
override LDFLAGS    += 	-L./$(SOURCE_LIB)
override LDLIBS     +=	-lcriterion -lsrc


SRC 	= 		$(REC_FUNC)redirect.c			\
				$(TEST_SRC)t_hello_world.c		\

OBJ 	= 	$(SRC:.c=.o)


$(NAME): $(OBJ)
	$(PRINT) "\n------->\tPRECOMPILED TESTS SRC DEPENDECIES.\n"
	@$(MAKE) $(LIB) -C $(SOURCE_PATH) $(ADD_COVERAGE) $(ADD_LCRITERION)
	$(LD) $(CFLAGS) $^ $(LDFLAGS) $(LDLIBS) -o $@
	$(PRINT) "\n------->\tCONGRATS !\n"
	$(PRINT) "\n\n"
	./$(NAME)
	$(PRINT) "\n\n"

all: $(NAME)

clean:
	$(PRINT) "\n------->\tREMOVE TESTS TMP FILES\n"
	$(RM) $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	$(PRINT) "------->\tREMOVE TESTS BINARY\n"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re