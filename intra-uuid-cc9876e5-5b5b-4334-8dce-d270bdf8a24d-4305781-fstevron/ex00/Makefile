SRCS		=	main.cpp

OBJ_SRC = $(SRCS:.cpp=.o)

NAME = templates

CC = c++

REM = rm -rf

LIBH = whatever.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJ_SRC)
			${CC} ${FLAGS} ${OBJ_SRC} -o ${NAME}

%.o:	%.cpp $(LIBH)
			$(CC) $(FLAGS) -c $< -o $@

clean:
		$(REM) $(OBJ_SRC)

fclean: clean
		$(REM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
