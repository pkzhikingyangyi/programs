CC = g++
CFLAGS = -g
SOURCE = main.cpp zone.cpp
DESTINATION = main.o zone.o

main: $(DESTINATION)
	$(CC) $(CFLAGS) -o $@ $^ -lGL -lglut

main.o: main.cpp
	$(CC) $(CFLAGS) -o $@ $^
zone.o: zone.cpp
	$(CC) $(CFLAGS) -o $@ $^
