od: od.o
	@g++ -o OD od.o

od.o: od.cpp constants.h
	@g++ -c od.cpp constants.h

clean:
	@rm -f *.o
	@rm OD
