#include <iostream>
int main() {
	double a[6];
	for (int i = 0; i < 6; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < 6; ++i) {
		a[i] /= 1000;
		std::cout << 2*(0.272-1.050*a[i])/(a[i]*a[i]) << std::endl;
	}
	return 0;
}