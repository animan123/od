CXX = g++ -std=c++11
SRC = ../src/

rook: rook.o utils.o
	$(CXX) rook.o utils.o -o rook.out

bishop: bishop.o utils.o
	$(CXX) bishop.o utils.o -o bishop.out

king: king.o utils.o
	$(CXX) king.o utils.o -o king.out

knight: knight.o utils.o
	$(CXX) knight.o utils.o -o knight.out

white_pawn_push: white_pawn_push.o utils.o
	$(CXX) white_pawn_push.o utils.o -o white_pawn_push.out

black_pawn_push: black_pawn_push.o utils.o
	$(CXX) black_pawn_push.o utils.o -o black_pawn_push.out

white_pawn_capture: white_pawn_capture.o utils.o
	$(CXX) white_pawn_capture.o utils.o -o white_pawn_capture.out

utils.o:
	$(CXX) -c $(SRC)utils.cpp

clean:
	@rm -rf *.out
	@rm -rf *.o
