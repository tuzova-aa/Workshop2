#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double h = 0.272;        
    const double delta_h = 0.001;   
    const double v0 = 1.050;       
    const double delta_v0 = 0.005;  

    
    double t;        
    double delta_t;  
    double g;        
    std::cin >> t;
    std::cin >> delta_t;

   std::cin >> g;

    double b = h - v0 * t;
    double x = delta_h / b;
    double y = delta_v0 / b;
    double z = 2 * delta_t / t;

    double delta_g = g * sqrt(x * x + y * y+ z * z);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << delta_g  << std::endl;

    return 0;
}