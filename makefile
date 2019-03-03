#build an executable named board from board.cpp
all:board.cpp
	g++ -g -Wall -o board board.cpp
