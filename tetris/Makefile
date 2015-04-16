CC = g++
CFLAGS = -g
SOURCE = main.cpp zone.cpp
DESTINATION = main.o zone.o

main: $(DESTINATION)
	$(CC) $(CFLAGS) -o $@ $^ -lGL -lglut -lX11 -lXmu -lXi -lGLU -lm

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^
zone.o: zone.cpp
	$(CC) $(CFLAGS) -c $^
