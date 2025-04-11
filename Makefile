# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 18:28:59 by fernafer          #+#    #+#              #
#    Updated: 2025/04/11 20:05:17 by fernafer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# LIBRARY NAME
NAME = libft.a

# COMPILATOR
CC = cc

# COMPILATION FLAGS
CFLAGS = -Wall -Wextra -Werror -c

# ARCHIVER
AR = ar rcs

# SOURCES FILES LIST
SOURCES = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c \
		  ft_memset.c ft_strlcpy.c ft_bzero.c 

# HEADER FILES
HEADERS = libft.h

# OBJECTS LIST CREATOR
OBJS = $(SOURCES:.c=.o)

# MAIN RULE: LIBFT.A CREATOR.
all: $(NAME)

# CREATOR OBJS RULE
%.o: %.c $(HEADERS)
		 $(CC) $(CFLAGS) $< -o $@

# RULE TO CREATE THE LIBRARY
$(NAME): $(OBJS)
		 $(AR) $@ $^

# CLEAN RULE: DELETE OBJECT FILES
clean:
		rm -rf $(OBJS)

# FCLEAN RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
		rm -rf $(NAME)

# RE RULE: RECOMPILES ALL
re: fclean all

# PHONY TARGETS
.PHONY: all clean fclean re