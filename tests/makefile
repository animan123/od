CXX = g++ -std=c++11
SRC = ../src/

utils_test: utils_test.o tests.o utils.o
	$(CXX) -o utils_test.out utils_test.o tests.o utils.o

popcnt_test: popcnt_test.o tests.o utils.o
	$(CXX) -o popcnt_test.out popcnt_test.o tests.o utils.o

all_board_test: pawn_test king_test queen_test knight_test bishop_test rook_test all_piece_test

pawn_test: pawn_test.o tests.o board.o utils.o
	$(CXX) -o pawn_test.out pawn_test.o tests.o board.o utils.o

king_test: king_test.o tests.o board.o utils.o
	$(CXX) -o king_test.out king_test.o tests.o board.o utils.o

queen_test: queen_test.o tests.o board.o utils.o
	$(CXX) -o queen_test.out queen_test.o tests.o board.o utils.o

knight_test: knight_test.o tests.o board.o utils.o
	$(CXX) -o knight_test.out knight_test.o tests.o board.o utils.o

bishop_test: bishop_test.o tests.o board.o utils.o
	$(CXX) -o bishop_test.out bishop_test.o tests.o board.o utils.o

rook_test: rook_test.o tests.o board.o utils.o
	$(CXX) -o rook_test.out rook_test.o tests.o board.o utils.o

all_piece_test: all_piece_test.o tests.o board.o utils.o
	$(CXX) -o all_piece_test.out all_piece_test.o tests.o board.o utils.o

rook_moves_test: rook_moves_test.o utils.o tests.o
	$(CXX) -o rook_moves_test.out rook_moves_test.o utils.o tests.o

%.o: %.cpp
	$(CXX) -c $<

utils.o:
	$(CXX) -c $(SRC)utils.cpp

board.o:
	$(CXX) -c $(SRC)board.cpp

clean:
	@rm -rf *.o
	@rm -rf *.out
