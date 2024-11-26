#include "board.h"
#include <memory>
#include <iostream>

using namespace std;


Board::Board()
{
	memset(_board, '*', sizeof(_board));
}

void Board::PrintBoard() const
{
	for (int i = 0; i < BoardRowSize; i++)
	{
		for (int j = 0; j < BoardColumnSize; j++)
		{
			cout << _board[i][j];
		}

		cout << endl;
	}
}