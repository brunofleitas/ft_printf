# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 15:52:38 by bfleitas          #+#    #+#              #
#    Updated: 2024/03/12 17:31:33 by bfleitas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC	= cc

CFLAGS	= -Wall -Werror -Wextra

RM	= rm -rf

PRINTF	= ar rcs

SRCS	= ft_printf.c output_char_string.c output_hex.c output_nbr.c

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(PRINTF) $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJS) 
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean 

re: fclean all

.PHONY: all bonus clean fclean re
