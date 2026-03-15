#include <iostream>
#include<cmath>
int main() {
	double a[30];
	double aver;
	std::cin >> aver;
	for (int i = 0; i < 30; ++i) {
		std::cin >> a[i];
	}
	double sum = 0;
	for (int i = 0; i < 30; ++i) {
		sum += (a[i] - aver)*(a[i] - aver);
	}
	std::cout << sqrt(sum / (30 * 29));
	return 0;
}