SRC	=	push_swap.c
LIBFT	=	ft_atoi.c ft_isdigit.c ft_lst_utils.c ft_putstr_fd.c\
		ft_split.c ft_strdup.c ft_strlen.c ft_strtrim.c \
		ft_stackop.c
BONS	=

DIRSRC	=	src/
HEAD	=	includes/
LIBFTSRC=	libft/

SRCS		= ${addprefix ${DIRSRC}, ${SRC}}
LIBFT_SRCS	= ${addprefix ${LIBFT_SRC}, ${LIBFT}}

OBJS		= $(SRCS:.c=.o)
LIBFT_OBJS	= ${LIBFT_SRCS:.c=.o}

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

.c.o:
		@${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

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
