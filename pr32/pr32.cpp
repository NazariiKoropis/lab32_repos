#include <iostream>
#include <cmath>

int main() {

	double a;
	double b;
	double c;
	double x;
	double F;
	std::cout << "Enter a, b, c, x: ";
	std::cin >> a >> b >> c >> x;

	if (x < 5 && b != 0)
		F = a * std::pow((x + 7), 2) - b;
	if( x > 5 && b == 0)
		F = (x - c * a)/a*x;
	if (!(x < 5 && b != 0) && !(x > 5 && b == 0))
		F = x / c;

	std::cout << "F = " << F << std::endl;


	if (x < 5 && b != 0)
		F = a * std::pow((x + 7), 2) - b;
	else if (x > 5 && b == 0)
		F = (x - c * a) / a * x;
	else 
		F = x / c;

	std::cout << "F = " << F << std::endl;

	return 0;
}
