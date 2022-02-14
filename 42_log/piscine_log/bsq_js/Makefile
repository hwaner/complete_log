SRCDIR = srcs
INCDIR = includes
OBJS = $(SRCSDIR:.c=.o)
TARGET = BSQ
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} $(CFLAGS) -c -I ${INCDIR} $< -o $@

all: $(TARGET)

$(TARGET): $(OBJS)
	${CC} $(CFLAGS) -I ${INCDIR} -o $@ $^

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(TARGET)

re: fclean all

.PHONY: all clean fclean re
