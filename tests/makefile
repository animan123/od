CXX = g++ -std=c++11
SRC = ../src/

utils_test: utils_test.o tests.o utils.o
	$(CXX) -o utils_test.out utils_test.o tests.o utils.o

utils_test.o:
	$(CXX) -c utils_test.cpp

utils.o:
	$(CXX) -c ../src/utils.cpp

tests.o:
	$(CXX) -c tests.cpp

clean:
	@rm -rf *.o
	@rm -rf *.out
