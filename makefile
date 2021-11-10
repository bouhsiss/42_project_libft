NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror -I -c
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

.c.o : 
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)
	
clean :
	rm -f $(wildcard *.o)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY : all clean fclean re
