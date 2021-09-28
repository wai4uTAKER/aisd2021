#include <iostream>
#include "DLIST.h"






int dialogue() {
	std::cout << "___________MENU___________" << std::endl;
	std::cout << "1.Square saide"  << std::endl;
	std::cout << "2.Polar cords" << std::endl;
	std::cout << "3.curvature radius" << std::endl;
	std::cout << "4.curvature node" << std::endl;
	std::cout << "5.Area" << std::endl;
	std::cout << "6.High diametr"<< std::endl;
	std::cout << "7.Distance diametr" << std::endl;
	std::cout << "8.New" << std::endl;
	std::cout << "9. Show function " << std::endl;
	return get_choice(9);
}



int main(int argc, char* argv[])
{
	p2::DecartList DL(1);
	int choice, i;

	while (choice = dialogue()) {

		if (choice == 1) {
			std::cout << "Square side " << DL.chord() << std::endl;
		}
		else if (choice == 2) {
			int angle;
			std::cout << "Input angle :"<< std::endl;
			std::cin >> angle;
			if (!std::cin.good()) return -1;

			std::cout << "radius in poalr by angle" << DL.polar(angle) << std::endl;
		}
		else if (choice == 3) {
			std::cout << "Curvature Radius " << DL.curvatureR() << std::endl;
		}
		else if (choice == 4) {
			std::cout << "Curvaturn Node " << DL.curvatureN() << std::endl;
		}
		else if (choice == 5) {
			std::cout << "Decart list area  " << DL.area() << std::endl;
		}
		else if (choice == 6) {
			std::cout << "High diamter" << DL.highD() << std::endl;
		}
		else if (choice == 7) {
			std::cout << "Distance by diametr" << DL.distanceD() << std::endl;
		}
		else if (choice == 8) {
			int a;
				std::cout << "Input n :" << std::endl;
				std::cin >> a;
				if (!std::cin.good()) return -1;
				DL.setN(a);
		}
		else if (choice == 9) {
			
			std::cout << "X^3+Y^3 =" << DL.getN() << "XY " << std::endl;
		}
		else return -1;
	}
	return 0;
}
