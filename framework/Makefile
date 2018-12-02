# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 19:49:12 by fbabin            #+#    #+#              #
#    Updated: 2018/12/01 17:44:54 by bleplat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libunit.a

FNT				=	test_list \
					tests_run \
					test_stdout \
					test_putstr \
					test_putstr_wrapper \
					tests_run_wrapper

CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra

INCLUDES		=	includes
SRC_DIR			=	srcs
OBJ_DIR			=	obj

SRC			=	$(patsubst %, $(SRC_DIR)/%.c, $(FNT))
OBJ			=	$(patsubst %, $(OBJ_DIR)/%.o, $(FNT))

#COLORS
_CYAN=\x1b[36m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
		@ar rcs $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo $@ ": $(_GREEN)Done$(_END)"

$(OBJ_DIR):
		@mkdir -p $@
		@echo $@ ": $(_GREEN)Done$(_END)"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(INCLUDES)/libunit.h | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)
		@echo $@ ": $(_GREEN)Done$(_END)"

clean:
		@/bin/rm -f $(OBJ)
		@echo $@ ": $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(NAME)
		@echo $@ ": $(_GREEN)Done$(_END)"

re: fclean all

.PHONY: all clean fclean re
