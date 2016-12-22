SRC = ../src/

utils_test: utils_test.o tests.o utils.o
	@g++ -o utils_test.out utils_test.o tests.o utils.o

utils_test.o:
	@g++ -c utils_test.cpp

utils.o:
	@g++ -c ../src/utils.cpp

tests.o:
	@g++ -c tests.cpp

clean:
	@rm -rf *.o
	@rm -rf *.out
