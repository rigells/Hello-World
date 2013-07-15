CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf

all : lesson13

lesson13 : lesson13.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson13.o : lesson13.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson13
