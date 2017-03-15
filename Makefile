CC = g++
OBJCS = main.o Port2Morse.o Morse2Port.o MorseRead.o PortRead.o
CFLAGS = -c -W -Wall -ansi -O0 -pedantic
PROG = morse

all: $(PROG)

$(PROG): $(OBJCS)
	$(CC) $(OBJCS) -o $(PROG)

main.o: 
	$(CC) $(CFLAGS) main.cpp

Morse2Port.o: Morse2Port.cpp
	$(CC) $(CFLAGS) Morse2Port.cpp

Port2Morse.o: Port2Morse.cpp
	$(CC) $(CFLAGS) Port2Morse.cpp

MorseRead.o: MorseRead.cpp
	$(CC) $(CFLAGS) MorseRead.cpp

PortRead.o: PortRead.cpp
	$(CC) $(CFLAGS) PortRead.cpp

clean:
	rm -rf *.o *.txt $(PROG)
