NAME = phonebook

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

PREF_SRC = ./src/
PREF_OBJ = ./obj/


#SRCS = megaphone.cpp
HEADER = $(PREF_SRC)phonebook.hpp
SRCS = $(wildcard $(PREF_SRC)*.cpp)
OBJS = $(SRCS:$(PREF_SRC)%.cpp=$(PREF_OBJ)%.o)

all: $(NAME)
		@echo "Make done"

$(NAME): $(OBJS)
		$(CC) $(CLFAGS) $(OBJS) -o $(NAME)

$(PREF_OBJ)%.o: $(PREF_SRC)%.cpp $(HEADER)
		$(CC) $(CLFAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
		@echo "Make clean done"

fclean: clean
		$(RM) $(NAME)
		@echo "Make fclean done"

re: fclean all

.PHONY :	all clean fclean re norm
