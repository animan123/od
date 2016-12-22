CXX = g++ -std=c++11

od: od.o utils.o
	$(CXX) -o OD.out od.o utils.o

od.o:
	$(CXX) -c od.cpp

utils.o:
	$(CXX) -c utils.cpp

clean:
	@rm -f *.o
	@rm -f *.out

cleano:
	@rm -f *.o
