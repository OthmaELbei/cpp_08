CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Span.cpp
OPJECT = $(FILES:.cpp=.o)

NAME = Span

all : $(NAME)

$(NAME): $(OPJECT)
	$(CC) $(CFLAGS) $(OPJECT) -o $(NAME)

%.o: %.cpp Span.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OPJECT)
fclean: clean
	rm -f $(NAME)

re: fclean all 