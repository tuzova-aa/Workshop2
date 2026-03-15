#include <iostream>
#include<cmath>
int main() {
	double a[30];
	for (int i = 0; i < 30; ++i) {
		std::cin >> a[i];
	}
	double sum = 0;
	for (int i = 0; i < 30; ++i) {
		sum += a[i];
	}
	std::cout << sum/30;
	return 0;
}