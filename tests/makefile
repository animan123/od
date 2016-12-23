CXX = g++ -std=c++11
SRC = ../src/

utils_test: utils_test.o tests.o utils.o
	$(CXX) -o utils_test.out utils_test.o tests.o utils.o

pawn_test: pawn_test.o tests.o board.o utils.o
	$(CXX) -o pawn_test.out pawn_test.o tests.o board.o utils.o

utils_test.o:
	$(CXX) -c utils_test.cpp

pawn_test.o:
	$(CXX) -c pawn_test.cpp

utils.o:
	$(CXX) -c ../src/utils.cpp

board.o:
	$(CXX) -c ../src/board.cpp

tests.o:
	$(CXX) -c tests.cpp

clean:
	@rm -rf *.o
	@rm -rf *.out
