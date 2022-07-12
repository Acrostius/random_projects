#include <iostream>
#include <vector>
#include <algorithm>

inline void ResetVectorInt(std::vector<int>& vec) { for (int x : vec) { vec.pop_back(); }; }
inline void keep_window_open() { char ch; std::cin >> ch; }

template<typename C> // requires Container<C>()
void sort(C& c)
{
	std::sort(c.begin(), c.end());
}

int main()
{
	std::vector<double> distances;
	double sumDistances = 0;

	// Get user input until he presses CTRL + Z
	std::cout << "Enter the distances between cities: ";
	for (double distance; std::cin >> distance; )
	{
		distances.push_back(distance);
	}

	// Loop through each element in vector and add to sumDistances
	for (double x : distances)
	{
		sumDistances += x;
	}

	// Print the total, smallest, largest & mean distance of given distances.
	std::cout << "Total distance to travel: " << sumDistances << '\n';
	sort(distances);
	std::cout << "Smallest distance: " << distances[0] << '\n';
	std::cout << "Largest distance: " << distances[distances.size() - 1] << '\n';

	std::cout << "Mean Distance: " << sumDistances / distances.size() << '\n';

	keep_window_open();
	return 0;
}
