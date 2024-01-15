CC=gcc
FLAGS=-g -Wall -lpthread -ldl -lm -lrt
INC=

TARGET=anbo

$(TARGET):
	$(CC) -o $(TARGET) $(TARGET).c $(INC) $(FLAGS)

clean:
	rm -rf *~
	rm -rf $(TARGET)
	rm -rf $(TARGET).o
