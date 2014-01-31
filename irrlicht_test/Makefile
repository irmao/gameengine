CC=g++
CFLAGS=-Wall -O3 -ffast-math
IRRLICHT_HOME=lib/irrlicht-1.8.1
LIBFLAGS=-I$(IRRLICHT_HOME)/include -L$(IRRLICHT_HOME)/lib/Linux -lIrrlicht -lGL -lXxf86vm -lXext -lX11 -lXcursor -L/usr/X11R6/lib64
DEST=linux/billboarding

all:
	$(CC) main.cpp -o $(DEST) $(CFLAGS) $(LIBFLAGS)

clean:
	rm $(DEST)
