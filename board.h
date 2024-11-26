#ifndef BOARD_H
#define BOARD_H

class Board
{
private:
	static const int BoardRowSize = 32;
	static const int BoardColumnSize = 86;
	char _board[BoardRowSize][BoardColumnSize];

public:
	Board();
	void PrintBoard() const;
};


#endif // BOARD_H