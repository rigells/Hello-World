CXX = g++
LIB = -lSDL -lSDL_image

all : lesson03

lesson03 : lesson03.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson03.o : lesson03.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson03
