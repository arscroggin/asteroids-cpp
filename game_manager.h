#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "board.h"
#include <memory>

using namespace std;


class GameManager
{
private:
	unique_ptr<Board> _board;
	void AskForNumberOfPlayers();

public:
	GameManager();
	void StartGame();
};


#endif // GAMEMANAGER_H