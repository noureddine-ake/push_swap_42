# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 13:57:09 by nakebli           #+#    #+#              #
#    Updated: 2023/02/23 19:46:43 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =    push_swap

SRCS = main.c \
	push_swap_utils.c \
	parsing/parse_data.c \
	rules/push.c \
	rules/swap.c \
	rules/revers.c \
	rules/rrevers.c \
	sort/sort_5nums.c 

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

RM = rm -rf

all: $(NAME) $(OBJS) $(HEADER)
	@printf "\033[0;32mDONE ✅"

%.o: %.c $(HEADER)
	@cc -c $(CFLAGS) $<  -o $@
	@printf "\033[0;32m{compiling : %-30s .....} \r" ${notdir $@}

$(NAME): $(OBJS) $(HEADER)
	make bonus -C libft
	cc -o $(NAME) $(OBJS) libft/libft.a 

clean:
	$(RM) $(OBJS)
	make clean -C libft
	@printf "\033[0;32mDONE ✅"

fclean:clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.SILENT : $(NAME) clean fclean re

.PHONY : all clean fclean re