CXX = g++
LIB = -lSDL -lSDL_image

all : lesson06

lesson06 : lesson06.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson06.o : lesson06.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson06
