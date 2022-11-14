SRCS = \
	ft_isalpha.c \
	ft_isdigit.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = libft.a


$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	
clean :
	rm -f $(OBJS)
	
fclean : clean
	rm -f $(NAME)
	
re : fclean all
