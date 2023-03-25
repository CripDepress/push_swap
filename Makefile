RCS	=	ft_printf.c ft_format_utils.c ft_utils.c ft_print_int.c \
BONS	=
OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CC) $(NAME) $(OBJS)

bonus:		$(OBJS) $(BOBJ)
				$(CC) $(NAME) $(OBJS) $(BOBJ)

norm:
				norminette $(NAME) $(SRCS) $(BONS)

clean:
				$(RM) $(OBJS) $(BOBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus
