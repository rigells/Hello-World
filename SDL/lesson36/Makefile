CXX = g++
LIB = -lSDL -lGL -lGLU -lglut

all : lesson36

lesson36 : lesson36.o
	$(CXX) -Wall -o $@ $^ $(LIB)

lesson36.o : lesson36.cpp
	$(CXX) -Wall -c $^ 

clean :
	rm -rf *.o lesson36
