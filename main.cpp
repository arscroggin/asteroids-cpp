//

#include "main.h"
#include "board.h"
#include "asteroid.h"
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void printSizeOfTypes();
void testFunction();
void startGame();



int main()
{
	startGame();

	auto asteroid1 = new Asteroid();
	auto asteroid2 = new Asteroid();

	unique_ptr<Asteroid> asteroid3(new Asteroid());


	unique_ptr<Board> board(new Board());
	board->PrintBoard();

	vector<Asteroid> asteroids;
	asteroids.push_back(*asteroid1);
	asteroids.push_back(*asteroid2);
	asteroids.push_back(*asteroid3);

	for (const auto& asteroid : asteroids)
	{
		string id = std::to_string(asteroid.getId());
		cout << "Asteroid ID is: " + id << endl;
	}

	asteroid1->move(3, 2);
	asteroid1->move(3, 2);

	cout << "Asteroid 1 location is X: " << asteroid1->getX() << " Y: " << asteroid1->getY() << endl;

	printSizeOfTypes();
	testFunction();

	return 0;
}

void printSizeOfTypes()
{
	cout << "Size Of int is " << sizeof(int) << endl;
	cout << "Size Of long is " << sizeof(long long) << endl;
}

void testFunction()
{
	auto myMap = new map<int, string>();

	myMap->insert(make_pair(1, "Adam R. Scroggin"));
	myMap->insert(make_pair(2, "Nina M. Scroggin"));
	myMap->insert(make_pair(3, "Stella E. Scroggin"));


	for (auto& person : *myMap)
	{
		cout << "Name is: " << person.second << endl;
	}


}

void startGame()
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