# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 13:57:09 by nakebli           #+#    #+#              #
#    Updated: 2023/02/28 18:31:20 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =    push_swap

B_NAME =    checker

SRCS = main.c \
	push_swap_utils.c \
	parsing/parse_data.c \
	rules/push.c \
	rules/swap.c \
	rules/revers.c \
	rules/rrevers.c \
	sort/sort_5nums.c \
	sort/big_sort.c 

B_SRCS = bonus/main_bonus.c \
	bonus/push_swap_utils_bonus.c \
	bonus/parsing/parse_data_bonus.c \
	bonus/rules/push_bonus.c \
	bonus/rules/swap_bonus.c \
	bonus/rules/revers_bonus.c \
	bonus/rules/rrevers_bonus.c \
	bonus/sort/sort_5nums_bonus.c \
	bonus/sort/big_sort_bonus.c 

OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

B_HEADER = bonus/push_swap_bonus.h

RM = rm -rf

all: $(NAME) $(OBJS) $(HEADER)
	@printf "\033[0;32mDONE ✅"

%.o: %.c $(HEADER)
	@cc -c $(CFLAGS) $<  -o $@
	@printf "\033[0;32m{compiling : %-30s .....} \r" ${notdir $@}

$(NAME): $(OBJS) $(HEADER)
	make bonus -C libft
	cc -o $(NAME) $(OBJS) libft/libft.a

bonus : $(B_NAME) $(B_OBJS) $(B_HEADER)

$(B_NAME):$(B_OBJS) $(B_HEADER)
	make bonus -C libft
	cc -o $(B_NAME) $(B_OBJS) libft/libft.a

clean:
	$(RM) $(OBJS) $(B_OBJS)
	make clean -C libft
	@printf "\033[0;32mDONE ✅"

fclean:clean
	$(RM) $(NAME) $(B_NAME)
	make fclean -C libft

re: fclean all

.SILENT : $(NAME) $(B_NAME) clean fclean re

.PHONY : all clean fclean re