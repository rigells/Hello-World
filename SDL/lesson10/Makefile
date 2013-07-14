CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf

all : lesson10

lesson10 : lesson10.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson10.o : lesson10.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson10
