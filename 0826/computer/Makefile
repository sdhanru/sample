src = $(wildcard *.c)
objs = $(patsubst %.c, %.o, $(src))
CC = gcc
CPPFLAGS = -I./head
CFLAGS = -Wall -g -c

all:app
app:$(objs)
	$(CC) $^ -o $@
$(objs):%.o:%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	-rm -rf $(objs) app
.PHONY:all clean
