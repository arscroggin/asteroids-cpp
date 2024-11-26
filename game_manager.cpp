#include "game_manager.h"
#include <memory>
#include <iostream>
#include <string>

using namespace std;


GameManager::GameManager()
{
}

void GameManager::StartGame()
{
	AskForNumberOfPlayers();

	_board = make_unique<Board>();
	_board->PrintBoard();
}

void GameManager::AskForNumberOfPlayers()
{
	string inputLine;
	bool badInput = true;
	int numberOfPlayers = 1;

	cout << "Hello, Welcome to Asteroids!!!" << endl;


	while (badInput)
	{
		cout << "How many players? Enter 1 or 2" << endl;
		getline(cin, inputLine);

		if (inputLine == "1")
		{
			badInput = false;
			numberOfPlayers = 1;
		}
		else if (inputLine == "2")
		{
			badInput = false;
			numberOfPlayers = 2;
		}
	}
}