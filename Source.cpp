#include <iostream>
#include <cmath>

// compute harmonic row sum
// n up to (2^32) - 1
// and quadratic row
int main() {

	long long x, n;
	std::cin >> x;
	std::cin >> n;
	long long min = LLONG_MAX;
	long long y_closest;
	for (int k = 1; k <= n; ++k) {
		long long y;
		std::cin >> y;
		if (std::abs(x - y) < min) {
			min = std::abs(y - x);
			y_closest = y;
		}
		else if (std::abs(x - y) == min) {
			if (y < y_closest) {
				y_closest = y;
			}
		}
	}
	std::cout << "\n";
	std::cout << "Next Y: "  << y_closest;

/*
	for (int k = 1; k <= n; ++k) {
		if (k%3==0 && k%5==0) {
			std::cout << "foobar" << "\n";
		}
		else if (k%3==0) {
			std::cout << "foo" << "\n";
		}
		else if (k%5==0){
			std::cout << "bar" << "\n";
		}
		else {
			std::cout << k << "\n";
		}
	}
*/

/*
  	double sum_harm = 0.0;
	double sum_quad = 0.0;
	for (int den = 1; den <= n; ++den) {
		const double val = 1.0 / den;
		sum_harm += val;
		sum_quad += val * val;
	}
	std::cout << "Harmonic row sum = " << sum_harm << '\n';
	std::cout << "Quadratic row sum = " << sum_quad << '\n';
*/

/*
	int n;
	std::cout << "input n: ";
	std::cin >> n;

	double x0 = -0.5;
	double x1 = 0.5;
	double dx = 0.1;
	std::cout << "x\t|\tln(1+x)\t|\trow_sum\n";
	for (; x0 <= x1; x0 += dx) {
		double x_deg = -1.0;
		double row_sum = 0.0;
		for (int den = 1; den <= n; ++den) {
			x_deg *= -x0;
			row_sum += x_deg / den;
		}
		std::cout << x0 << "\t|\t" << log(1 + x0);
		std::cout << "\t|\t" << row_sum << '\n';
	}
*/

	
/*
 	unsigned char x = 0;
	do {
		std::cout << (int) x++ << '\n';
	} while (x != 0);
*/

	return 0;
}