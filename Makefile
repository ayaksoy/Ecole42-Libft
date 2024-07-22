# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 16:04:52 by aaksoy            #+#    #+#              #
#    Updated: 2023/12/08 00:38:31 by aaksoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")

BONUS		:= $(shell find . -type f -name "ft_lst*.c")

OBJS		=	${SRCS:.c=.o}

BONUS_OBJS	=	${BONUS:.c=.o}

NAME		=	libft.a

CC			=	gcc

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

all: ${NAME}

bonus: $(OBJS) $(BONUS_OBJS)
			ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
$(NAME):	${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
	
test: all
	gcc test.c libft.a -o test
	clear && ./test && rm -rf test $(OBJS) $(NAME)
	


