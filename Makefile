# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 13:57:09 by nakebli           #+#    #+#              #
#    Updated: 2023/03/11 16:49:00 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =    push_swap

B_NAME =    checker

SRCS = push_swap_utils.c \
	parsing/parse_data.c \
	rules/push.c \
	rules/swap.c \
	rules/revers.c \
	rules/rrevers.c \
	sort/sort_5nums.c \
	sort/big_sort.c 

# B_SRCS = checker.c \
# 	push_swap_utils.c \
# 	parsing/parse_data.c \
# 	rules/push.c \
# 	rules/swap.c \
# 	rules/revers.c \
# 	rules/rrevers.c \
# 	sort/sort_5nums.c \
# 	sort/big_sort.c 

OBJS = $(SRCS:.c=.o)

# B_OBJS = $(B_SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

RM = rm -rf

all: $(NAME) $(OBJS) $(HEADER)
	@printf "\033[0;32mDONE ✅"

%.o: %.c $(HEADER)
	@cc -c $(CFLAGS) $<  -o $@
	@printf "\033[0;32m{compiling : %-30s .....} \r" ${notdir $@}

$(NAME): $(OBJS) $(HEADER) main.c libft/libft.h
	make bonus -C libft
	cc main.c -o $(NAME) $(OBJS) libft/libft.a

bonus : $(B_NAME) $(OBJS)
	@printf "\033[0;32mDONE ✅"

$(B_NAME): $(OBJS) $(HEADER) checker.c libft/libft.h
	make bonus -C libft
	cc checker.c -o $(B_NAME) $(OBJS) libft/libft.a

clean:
	$(RM) $(OBJS) $(OBJS)
	make clean -C libft
	@printf "\033[0;32mDONE ✅"

fclean:clean
	$(RM) $(NAME) $(B_NAME)
	make fclean -C libft

re: fclean all

.SILENT : $(NAME) $(B_NAME) clean fclean re

.PHONY : all clean fclean re