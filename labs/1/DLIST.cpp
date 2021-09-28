#include <iostream>
#include "DLIST.h"

namespace p2 {
	DecartList::DecartList(double N) {
		n = N;
	}

	DecartList& DecartList::setN(double n0) {
		n = n0;
		return *this;
	}
}
int get_choice(int i) {
	int  num;
	std::cout << "Input answer: " << std::endl;
	std::cin >> num;
	if (!std::cin.good()) return -1;

	while (num > i || !std::cin.good()) {
		std::cout << "Wrong" << std::endl;
		std::cout << "Input answer: ";
		std::cin >> num;
		if (!std::cin.good()) return -1;
	}
	return num;
}
