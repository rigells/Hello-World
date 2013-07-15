CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf
SRC = $(wildcard *.cpp)
BIN = $(basename $(SRC))

all : $(BIN)

$(BIN): $(BIN).o
	$(CXX) -Wall -o $@ $^ $(LIB)

$(BIN).o : $(BIN).cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o $(BIN) 

echo :
	@echo $(BIN)

