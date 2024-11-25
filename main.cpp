//

#include "main.h"
#include "asteroid.h"
#include <vector>
#include <algorithm>

using namespace std;

void printSizeOfTypes();

int main()
{
	cout << "Hello World." << endl;

	auto asteroid1 = new Asteroid();
	auto asteroid2 = new Asteroid();

	unique_ptr<Asteroid> asteroid3(new Asteroid());



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

	return 0;
}

void printSizeOfTypes()
{
	cout << "Size Of int is " << sizeof(int) << endl;
	cout << "Size Of long is " << sizeof(long long) << endl;
}
