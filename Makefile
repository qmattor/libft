CC := gcc
NAME := libft.a
CFLAGS := -Wall -Wextra -Werror
SOURCE :=	ft_strrchr.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strncpy.c \
			ft_striter.c \
			ft_strstr.c \
			ft_isdigit.c \
			ft_putnbr.c \
			ft_memccpy.c \
			ft_strdel.c \
			ft_memchr.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_putstr_fd.c \
			ft_toupper.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_putnbr_fd.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_putendl_fd.c \
			ft_memdel.c \
			ft_strnstr.c \
			ft_putchar.c \
			ft_isascii.c \
			ft_strlen.c \
			ft_strsub.c \
			ft_strnew.c \
			ft_memalloc.c \
			ft_putendl.c \
			ft_strncat.c \
			ft_itoa.c \
			ft_strncmp.c \
			ft_memcmp.c \
			ft_strtrim.c \
			ft_strequ.c \
			ft_putchar_fd.c \
			ft_memset.c \
			ft_strcat.c \
			ft_tolower.c \
			ft_strnequ.c \
			ft_strjoin.c \
			ft_atoi.c \
			ft_strclr.c \
			ft_strmapi.c \
			ft_strsplit.c \
			ft_isprint.c \
			ft_iswhtspc.c\
			ft_isalpha.c\
			ft_strchr.c\
			ft_strlcat.c\
			ft_strnlen.c\
			ft_countforstrings.c\
			ft_wowthatsgross.c\
			ft_lstnew.c\
			ft_lstdel.c\
			ft_lstadd.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstdel.c\
			ft_lstdelone.c\
			ft_appendlst.c\
			ft_searchlst.c\
			ft_arrylstadd.c\
			ft_benull.c\
			ft_arrylstdel.c\
			ft_arrylstnew.c\
			ft_strrev.c

OBJECTS := $(patsubst %.c,%.o,$(SOURCE))

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rc $@ $^
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
