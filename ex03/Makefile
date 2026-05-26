CC = g++

#-Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = FragTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CC) -c $(CFLAGS) $<

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all