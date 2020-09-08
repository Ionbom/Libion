CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=helloWorld

SRCS=helloWorld.c
OBJS=$(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f *.o

fclean: clean
	@rm -f $(TARGET)
