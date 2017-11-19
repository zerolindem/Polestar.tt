CC = gcc

CFLAGS = -g -Wall

RM_F = rm -rf

SOURCES = linux_list.c

INCLUDES = -I.

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) -o $@

%.o:%.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $< -o $@  
.PHONY: clean
clean:
	$(RM_F) $(OBJECTS) $(EXECUTABLE)
