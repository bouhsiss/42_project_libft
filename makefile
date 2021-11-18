NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
BONUS_C = $(wildcard *_bonus.c)
BONUS_O = $(BONUS_C:.c=.o)

$(NAME) : $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $@

.c.o : 
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(OBJS) $(BONUS_O)
	ar rc $(NAME) $(OBJS) $(BONUS_O)

all : $(NAME)
	
clean :
	rm -f $(wildcard *.o)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY : all clean fclean re
