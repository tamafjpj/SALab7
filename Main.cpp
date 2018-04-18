#include <iostream>
#include <math.h>

using namespace std;

double func (double x) {
	return x*exp(-x);
}

int main(int argc, char** argv) {
	double h, res = 0;
	const double a = 0;
	for (double b = 0.5, n = 1; b <=2; b += 0.5, n +=1) {
		h = (b-a)/n;
		res = h/3*(func(a) + 4*func((a+b)/2) + func(b));
		cout << res << "\n";
	}
	return 0;
}
