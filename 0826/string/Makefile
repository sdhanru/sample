src = $(wildcard *.c)
targets = $(patsubst %.c, %, $(src))

CC = gcc 
CPPFLAGS = 
CFLAGS = -Wall -g
LDFLAGS = 

all:$(targets)
$(targets):%:%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -rf $(targets)
.PHONY:clean all
