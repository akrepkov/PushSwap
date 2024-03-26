NAME	= push_swap
CC 		= gcc
CFLAGS	:= -Wextra -Wall -Werror 
LFT_NAME = libft.a
LFT_DIR = libft
LFT = $(LFT_DIR)/$(LFT_NAME)

SRCS	:= extra.c added_functions.c operations.c operations_2.c operations_3.c push_swap.c magic.c find.c ft_atoi.c
OBJS 	= $(SRCS:.c=.o)
HEADERS := push_swap.h

all: ${NAME}

${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean:
	@rm -f $(OBJS)
	@rm -f $(LFT)

fclean: clean
	@rm -f $(NAME)

re: clean all

.PHONY: all, clean, fclean, re
