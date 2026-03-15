#include <iostream>
int main() {
	double a[6];
	for (int i = 0; i < 6; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < 6; ++i) {
		std::cout << (1.0 * a[i] * 3.1415926) / 6 << std::endl;
	}
	return 0;
}