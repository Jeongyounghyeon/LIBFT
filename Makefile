NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
BUILD_DIR = build

SRCS = ft_isprint.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strjoin.c \
		ft_striteri.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_strmapi.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strtrim.c
OBJS = $(SRCS:.c=.o)

all : $(BUILD_DIR) $(NAME)

$(NAME) : ${addprefix $(BUILD_DIR)/, $(OBJS)}
	ar -rcus $@ $^

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(SRC_DIR)/include

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all