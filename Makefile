INCLUDES= -Iirrlicht-1.8.1/include -Iinclude/
LDFLAGS= -Lirrlicht-1.8.1/lib/Linux	-Llib/ 
BIN= ./bin
OBJ= ./obj
SRC= ./src
LIB= ./lib
CPPFLAGS= -O2 -Wall $(INCLUDES) -std=c++11
OBJECTS= $(OBJ)/animation.o $(OBJ)/billboardUnit.o $(OBJ)/entity2D.o $(OBJ)/entity3D.o $(OBJ)/image.o $(OBJ)/input.o $(OBJ)/model.o $(OBJ)/point2D.o $(OBJ)/point3D.o $(OBJ)/sprite.o

# Make commands

all: libs
	gcc -o $(BIN)/gameTest src/main.cpp ${INCLUDES} ${LDFLAGS}

libs: $(LIB)/libGE.a
	
$(LIB)/libGE.a: $(OBJECTS) 
	ar csr $(LIB)/libGE.a $(OBJECTS) 

$(OBJ)/animation.o: $(SRC)/animation.cpp
	g++ $(CPPFLAGS) -c $(SRC)/animation.cpp  $(INCLUDES) -o $(OBJ)/animation.o

$(OBJ)/billboardUnit.o:		 $(SRC)/billboardUnit.cpp	$(OBJ)/sprite.o		$(OBJ)/entity3D.o		$(OBJ)/animation.o
	g++ $(CPPFLAGS) -c $(SRC)/billboardUnit.cpp $(INCLUDES) -o $(OBJ)/billboardUnit.o

$(OBJ)/entity2D.o: $(SRC)/entity2D.cpp
	g++ $(CPPFLAGS) -c $(SRC)/entity2D.cpp $(INCLUDES) -o $(OBJ)/entity2D.o

$(OBJ)/entity3D.o: $(SRC)/entity3D.cpp
	g++ $(CPPFLAGS) -c $(SRC)/entity3D.cpp $(INCLUDES) -o $(OBJ)/entity3D.o

$(OBJ)/image.o:$(SRC)/image.cpp
	g++ $(CPPFLAGS) -c $(SRC)/image.cpp $(INCLUDES) -o $(OBJ)/image.o

$(OBJ)/input.o:$(SRC)/input.cpp
	g++ $(CPPFLAGS) -c $(SRC)/input.cpp $(INCLUDES) -o $(OBJ)/input.o

$(OBJ)/model.o:$(SRC)/model.cpp
	g++ $(CPPFLAGS) -c $(SRC)/model.cpp $(INCLUDES) -o $(OBJ)/model.o

$(OBJ)/point2D.o: $(SRC)/point2D.cpp
	g++ $(CPPFLAGS) -c $(SRC)/point2D.cpp $(INCLUDES) -o $(OBJ)/point2D.o

$(OBJ)/point3D.o: $(SRC)/point3D.cpp
	g++ $(CPPFLAGS) -c $(SRC)/point3D.cpp $(INCLUDES) -o $(OBJ)/point3D.o

$(OBJ)/sprite.o: $(SRC)/sprite.cpp $(OBJ)/image.o
	g++ $(CPPFLAGS) -c $(SRC)/sprite.cpp $(INCLUDES) -o $(OBJ)/sprite.o
