CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf

all : lesson08

lesson08 : lesson08.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson08.o : lesson08.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson08
