CXX = g++
LIB = -lSDL -lSDL_image -lSDL_ttf

all : lesson07

lesson07 : lesson07.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson07.o : lesson07.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson07
