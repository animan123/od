CXX = g++ -std=c++11
SRC = ../src/

rook: rook.o utils.o
	$(CXX) rook.o utils.o -o rook.out

bishop: bishop.o utils.o
	$(CXX) bishop.o utils.o -o bishop.out

utils.o:
	$(CXX) -c $(SRC)utils.cpp

clean:
	@rm -rf *.out
	@rm -rf *.o
