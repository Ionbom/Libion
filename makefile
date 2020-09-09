CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=helloWorld

SRCS=$(wildcard *.c) $(wildcard */*.c)
OBJS=$(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "Making $@" && $(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	@echo "Compiling $<:" && $(CC) $(CFLAGS) -c $< -o $@
clean:
	@echo "Cleaning all .o files." && rm -rf *.o */*.o

fclean: clean
	@echo "Removing $(TARGET) and a.out." && rm -rf $(TARGET) a.out

itwork:
	@echo "I can't solve this automagically, but hang in there buddy! you got this!"
