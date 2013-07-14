CXX = g++
LIB = -lSDL -lSDL_image

all : lesson05

lesson05 : lesson05.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson05.o : lesson05.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson05
