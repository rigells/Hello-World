CXX = g++
LIB = -lSDL

all : mysource2

mysource2 : mysource2.o
	$(CXX) -Wall -o $@ $^ $(LIB)

mysource2.o : mysource2.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o mysource2
