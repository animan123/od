CXX = g++ -std=c++11
SRC = ../src/

move_sanity_test: move_sanity_test.o tests.o utils.o board.o moves.o
	$(CXX) -o move_sanity_test.out move_sanity_test.o tests.o utils.o board.o moves.o

move_on_same_board_test: move_on_same_board_test.o tests.o utils.o board.o moves.o
	$(CXX) -o move_on_same_board_test.out move_on_same_board_test.o tests.o utils.o board.o moves.o

movegen_test: movegen_test.o tests.o utils.o board.o moves.o movegen.o
	$(CXX) -o movegen_test.out movegen_test.o tests.o utils.o board.o moves.o movegen.o

movegen_king_test: movegen_king_test.o tests.o utils.o board.o moves.o movegen.o
	$(CXX) -o movegen_king_test.out movegen_king_test.o tests.o utils.o board.o moves.o movegen.o

move_on_different_board_test: move_on_different_board_test.o tests.o utils.o board.o moves.o
	$(CXX) -o move_on_different_board_test.out move_on_different_board_test.o tests.o utils.o board.o moves.o

move_capture_test: move_capture_test.o tests.o utils.o board.o moves.o
	$(CXX) -o move_capture_test.out move_capture_test.o tests.o utils.o board.o moves.o

board_color_piece_test: board_color_piece_test.o tests.o utils.o board.o
	$(CXX) -o board_color_piece_test.out board_color_piece_test.o tests.o utils.o board.o

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

bishop_moves_test: bishop_moves_test.o utils.o tests.o
	$(CXX) -o bishop_moves_test.out bishop_moves_test.o utils.o tests.o

king_moves_test: king_moves_test.o utils.o tests.o
	$(CXX) -o king_moves_test.out king_moves_test.o utils.o tests.o

knight_moves_test: knight_moves_test.o utils.o tests.o
	$(CXX) -o knight_moves_test.out knight_moves_test.o utils.o tests.o

white_pawn_push_move_test: white_pawn_push_move_test.o utils.o tests.o
	$(CXX) -o white_pawn_push_move_test.out white_pawn_push_move_test.o utils.o tests.o

black_pawn_push_move_test: black_pawn_push_move_test.o utils.o tests.o
	$(CXX) -o black_pawn_push_move_test.out black_pawn_push_move_test.o utils.o tests.o

white_pawn_capture_move_test: white_pawn_capture_move_test.o utils.o tests.o
	$(CXX) -o white_pawn_capture_move_test.out white_pawn_capture_move_test.o utils.o tests.o

black_pawn_capture_move_test: black_pawn_capture_move_test.o utils.o tests.o
	$(CXX) -o black_pawn_capture_move_test.out black_pawn_capture_move_test.o utils.o tests.o

%.o: %.cpp
	$(CXX) -c $<

utils.o:
	$(CXX) -c $(SRC)utils.cpp

board.o:
	$(CXX) -c $(SRC)board.cpp

moves.o:
	$(CXX) -c $(SRC)moves.cpp

movegen.o:
	$(CXX) -c $(SRC)movegen.cpp

clean:
	@rm -rf *.o
	@rm -rf *.out
