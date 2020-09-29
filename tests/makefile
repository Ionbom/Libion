CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=-I../include
TARGET=new_elem_test

SRCS=$(TARGET).c $(wildcard ../source/*.c)
OBJS=$(SRCS:.c=.o)

all: $(TARGET)
.PHONY: clean fclean re error

$(TARGET): $(OBJS)
	@echo "Making $@" && $(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS)

%.o: %.c
	@echo "Compiling $<:" && $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "Cleaning all .o files." && rm -rf *.o */*.o

fclean: clean
	@echo "Removing $(TARGET) and a.out." && rm -rf $(TARGET) a.out

re: fclean all
