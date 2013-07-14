CXX = g++
LIB = -lSDL -lSDL_image 

all : lesson09

lesson09 : lesson09.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson09.o : lesson09.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson09
