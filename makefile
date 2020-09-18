CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=-Iinclude
TARGET=helloWorld

SRCS=$(wildcard *.c) $(wildcard source/*.c)
OBJS=$(SRCS:.c=.o)

all: $(TARGET)
.PHONY: test cleantest fcleantest clean fclean re itwork

$(TARGET): $(OBJS)
	@echo "Making $@" && $(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS)

%.o: %.c
	@echo "Compiling $<:" && $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

test:
	make -C ./tests && make -C ./tests clean

cleantest:
	make -C ./tests clean

fcleantest:
	make -C ./tests fclean

clean: cleantest
	@echo "Cleaning all .o files." && rm -rf *.o */*.o

fclean: clean fcleantest
	@echo "Removing $(TARGET) and a.out." && rm -rf $(TARGET) a.out

re: fclean all

itwork:
	@echo "I can't solve this automagically, but hang in there buddy! you got this!"
