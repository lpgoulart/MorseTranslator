PROG = bin/morse
CC = g++
OBJCS = src/main.o src/Port2Morse.o src/Morse2Port.o src/MorseRead.o src/PortRead.o
CFLAGS = -c -W -Wall -ansi -O0 -pedantic

all: dir $(PROG)

# Cria o diretorio /bin caso nao exista 
dir:
	mkdir -p bin

# Compila todos os arquivos *.cpp e os une em um unico executavel
$(PROG): $(OBJCS)
	$(CC) $(OBJCS) -o $(PROG)

main.o: 
	$(CC) $(CFLAGS) src/main.cpp

Morse2Port.o: src/Morse2Port.cpp
	$(CC) $(CFLAGS) src/Morse2Port.cpp

Port2Morse.o: src/Port2Morse.cpp
	$(CC) $(CFLAGS) src/Port2Morse.cpp

MorseRead.o: src/MorseRead.cpp
	$(CC) $(CFLAGS) src/MorseRead.cpp

PortRead.o: src/PortRead.cpp
	$(CC) $(CFLAGS) src/PortRead.cpp

clean:
	rm -rf src/*.o src/*.txt $(PROG)

