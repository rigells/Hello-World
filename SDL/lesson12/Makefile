CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf

all : lesson12

lesson12 : lesson12.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson12.o : lesson12.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson12
