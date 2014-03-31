INCLUDES: -Iirrlicht-1.8.1/include -Iinclude/
LIBS: -Lirrlicht-1.8.1/lib/Linux	-Llib/
BIN: ./bin
OBJ: ./obj
FLAGS: -O2 -Wall

# Make commands

all: libs
	gcc -o gameTest src/main.cpp ${INCLUDES} ${LIBS}

libs: $(LIB)/libGE.a
	ar csr $(LIB)/libGE.a
