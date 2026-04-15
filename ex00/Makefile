
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp
OPJECT = $(FILES:.cpp=.o)

NAME = Whatever

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp easyfind.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 