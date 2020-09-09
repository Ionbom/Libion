CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=-Iinclude
TARGET=helloWorld

SRCS=$(wildcard *.c) $(wildcard */*.c)
OBJS=$(SRCS:.c=.o)

all: $(TARGET)
.PHONY: clean fclean re itwork

$(TARGET): $(OBJS)
	@echo "Making $@" && $(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS)

%.o: %.c
	@echo "Compiling $<:" && $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	@echo "Cleaning all .o files." && rm -rf *.o */*.o

fclean: clean
	@echo "Removing $(TARGET) and a.out." && rm -rf $(TARGET) a.out

re: fclean all

itwork:
	@echo "I can't solve this automagically, but hang in there buddy! you got this!"
