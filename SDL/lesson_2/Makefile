CXX = g++
LIB = -lSDL

all : lesson2

lesson2 : lesson2.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson2.o : lesson2.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson2
