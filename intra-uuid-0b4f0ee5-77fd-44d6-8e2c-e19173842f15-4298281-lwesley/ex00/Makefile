# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwesley <lwesley@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 12:02:40 by lwesley           #+#    #+#              #
#    Updated: 2022/08/08 12:57:14 by lwesley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= whatever.cpp

CС			= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -O2
RM			= rm -f

SRC			= $(wildcard *.cpp)
INC			= $(wildcard *.hpp)
OBJS		= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INC) Makefile
			$(CС) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
			$(CС) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
