CXX = g++
LIB = -lSDL

all : mysource

mysource : mysource.o
	$(CXX) -Wall -o $@ $^ $(LIB)

mysource2.o : mysource.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o mysource
