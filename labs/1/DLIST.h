
#ifndef _DLIST_H_
#define _DLIST_H_
#include <math.h>

namespace p2 {

	class DecartList {
	private:
		double n;
	public:

		DecartList(double n = 1);

		DecartList& setN(double n0);

		double getN() const { return n; }

		double chord() const { return n / sqrt(2); }
		double polar(double angle) const { return (n * cos(angle) * sin(angle)) / (pow(sin(angle), 3) + pow(sin(angle), 3)); }
		double curvatureR() const { return n / (8 * sqrt(2)); }
		double curvatureN() const { return n / 2; }
		double area() const { return n * n / 6; }
		double highD() const { return n * sqrt(1.5) * 0.448; }
		double distanceD() const { return n * sqrt(1.5) * 0.577; }
	};

}
int get_choice(int i);
	
#endif