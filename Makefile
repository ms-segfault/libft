NAME			=	libft.a
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror 
RM				=	rm -rf

# Paths and Files
VPATH			=	src:src/conversion:src/list:src/memory:src/output:src/string
SRCS			=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c \
					ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_putstr_fd.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_split.c ft_strchr.c \
					ft_strncmp.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c \
					ft_strrchr.c ft_strtrim.c ft_substr.c ft_strjoin.c ft_split.c \
							
OBJS			=	$(addprefix obj/,$(SRCS:.c=.o))

# Rules
$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:			$(NAME)

obj:
				mkdir -p obj

obj/%.o:		%.c | obj
				mkdir -p $(dir $@)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) obj

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.SILENT:

.PHONY:			all clean fclean re