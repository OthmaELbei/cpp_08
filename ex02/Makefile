CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp
OPJECT = $(FILES:.cpp=.o)

NAME = MutantStack

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp MutantStack.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 