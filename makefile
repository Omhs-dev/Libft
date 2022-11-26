NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_atoi.c ft_bzero.c \
	ft_calloc.c ft_isascii.c ft_isprint.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c 
OBJ = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = clang
#AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

# $(OBJ): $(SRCS)
# 	$(CC) $(CFLAGS) -c $(SRCS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
