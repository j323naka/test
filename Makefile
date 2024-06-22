# Makefile for compiling and cleaning

# Variables
CC = gcc
CFLAGS = -Wall -O
TARGET = main
SOURCE = main.c

# target
all: $(TARGET)

# Compile the program
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE) -lm

# make clean
clean:
	rm -f $(TARGET) *~