CXX=g++
CXXFLAGS=-std=c++11

od: od.o utils.o
	@$(CXX) -o OD od.o utils.o

od.o:
	@$(CXX) -c od.cpp

utils.o:
	@$(CXX) -c utils.cpp

clean:
	@rm -f *.o
	@rm OD

cleano:
	@rm -f *.o
