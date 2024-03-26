CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h
SRCS = ft_strlen.c ft_strlcpy.c ft_strjoin_extra.c \
			ft_substr.c ft_strjoin.c ft_strncmp.c ft_split.c \
			ft_strlcat.c ft_perror.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@ar -rc $(NAME) $(OBJS)
	@echo "Done LIBFT compilation"

.c.o: 		
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re all./