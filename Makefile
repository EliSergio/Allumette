CC = gcc
CFLAGS = -I$(IDIR)
IDIR = ./include/
SRC = ./src/
SOURCES = $(SRC)*.c

all: allumette

allumette:
	$(CC) $(SOURCES) $(CFLAGS) -o $@

run:
	./allumette