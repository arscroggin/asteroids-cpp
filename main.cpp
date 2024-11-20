//

#include "main.h"
#include "asteroid.h"
#include <vector>

using namespace std;

int main()
{
	cout << "Hello World." << endl;

	auto asteroid1 = new Asteroid();
	auto asteroid2 = new Asteroid();

	std::unique_ptr<Asteroid> asteroid3(new Asteroid());



	std::vector<Asteroid> asteroids;
	asteroids.push_back(*asteroid1);
	asteroids.push_back(*asteroid2);
	asteroids.push_back(*asteroid3);

	for (const auto& asteroid : asteroids)
	{
		string id = std::to_string(asteroid.getId());
		cout << "Asteroid ID is: " + id << endl;
	}

	return 0;
}
