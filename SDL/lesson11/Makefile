CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer

all : lesson11

lesson11 : lesson11.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson11.o : lesson11.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson11
