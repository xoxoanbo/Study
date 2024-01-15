.SUFFIXES: .c .o

CC = gcc
CFLAGS = -g -Wall
LFLAGS =

LIB = -lpthread -ldl -lm -lrt
INC =

TARGET = anbo

OBJECTS = $(TARGET).o
SRCS = $(TARGET).c

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS) $(LFLAGS) $(LIB)

$(OBJECTS): $(SRCS)
	$(CC) $(CFLAGS) -c $(INC) $(SRCS)

clean:
	rm $(TARGET).o $(TARGET)
