#include "Parallelogram.hpp"
#include "Rhomb.hpp"
#include "Square.hpp"

int main() {
	Parallelogram shape1(5, 3, 60, Point(2, 5));
	Rhomb shape2(20, 45);
	Square shape3(20, Point(0, 0), Color(127, 127, 127));

	std::cout << shape1 << std::endl <<
				 shape2 << std::endl <<
				 shape3 << std::endl;

	shape1.setColor(127, 45, 45);
	shape1.moveTo(Point(2, 2));
	shape2.rotate(37);
	shape3.scale(0.5);


	std::cout << shape1 << std::endl <<
				 shape2 << std::endl <<
				 shape3 << std::endl;

	
	return 0;
}
