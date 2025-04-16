# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 18:28:59 by fernafer          #+#    #+#              #
#    Updated: 2025/04/16 15:43:45 by fernafer         ###   ########.fr        #
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
SOURCES = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_memcpy.c ft_strlcpy.c ft_bzero.c ft_memmove.c \
	  ft_toupper.c ft_tolower.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strlcat.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_split.c

# HEADER FILES
HEADERS = libft.h

# OBJECTS LIST CREATOR
OBJS = $(SOURCES:.c=.o)

# MAIN RULE: LIBFT.A CREATOR.
all: $(NAME)

# CREATOR OBJS RULE
%.o: %.c $(HEADERS)
	@echo "⚙️ Compiling $< in $@"
		 $(CC) $(CFLAGS) $< -o $@

# RULE TO CREATE THE LIBRARY
$(NAME): $(OBJS)
	@echo "📚 Making the static library $(NAME) from the objects..."
	@$(AR) $@ $^
	@echo "-----------------------------------------"
	@echo "✅ Compilation $(NAME) completed."
	@echo "-----------------------------------------"

# CLEAN RULE: DELETE OBJECT FILES
clean:
	@echo "🧹 Cleaning: Deleting objects files (*.o)..."
	@rm -rf $(OBJS)
	@echo "🧹 Cleaning completed."
# FCLEAN RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
	@echo "🗑️ Deep cleaning: Deleting objects files and library ($(NAME))..."
	@rm -rf $(NAME)
	@echo "🗑️ Deep cleaning completed."
# RE RULE: RECOMPILES ALL
re: fclean all
	@echo "🔄 Recompiling project..."
# PHONY TARGETS
.PHONY: all clean fclean re
