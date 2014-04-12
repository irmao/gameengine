CC=g++
CFLAGS=-Wall -std=c++0x -pthread
INCLUDE_DIR=../include
SRC_DIR=../src

all: billboardUnitTest

billboardUnitTest: billboardUnitTest.cpp $(SRC_DIR)/animation.cpp $(SRC_DIR)/billboardUnit.cpp
	$(CC) billboardUnitTest.cpp $(SRC_DIR)/billboardUnit.cpp $(SRC_DIR)/animation.cpp -o billboardUnitTest $(CFLAGS) -I $(INCLUDE_DIR)
	
clean:
	rm billboardUnitTest
