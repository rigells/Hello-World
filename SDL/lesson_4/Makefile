CXX = g++
LIB = -lSDL -lSDL_image

all : lesson04

lesson04 : lesson04.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson04.o : lesson04.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson04
