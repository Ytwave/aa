// #include <iostream>
// #include <cmath>
// using namespace std;

// double func(double x) {
//     return x - pow(13, 0.25);
// }

// int main() {
//     double xl = 1.5, xr = 2.0;
//     double fxl, fxr, x1;
    
//     do {
//         fxl = func(xl);
//         fxr = func(xr);

//         x1 = (xl * fxr - xr * fxl) / (fxr - fxl);

//         if (fxl * func(x1) < 0) {
//             xr = x1;
//         } else {
//             xl = x1;
//         }

//     } while (abs(func(x1)) >= 0.000001);

//     std::cout.precision(6);
//     std::cout << std::fixed;
//     std::cout << x1 << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// double func(double x){
//         return 1.0/43.0;
//     }

// int main(){
//     double epsilon = 0.000001;
//     double x = 0.01;
//     double newX = func(x);
//     while((abs((newX-x)/newX)*100 < epsilon)){
//         x = newX;
//         newX = func(x);
//     }

//     std::cout.precision(6);
//     std::cout << std::fixed;
//     std::cout << newX << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

double func(double x){
        return sqrt(7.0);
    }

int main(){
    double epsilon = 0.000001;
    double x = 0;
    double newX = func(x);
    while((abs((newX-x)/newX)*100 < epsilon)){
        x = newX;
        newX = func(x);
    }

    std::cout.precision(6);
    std::cout << std::fixed;
    std::cout << newX << endl;

    return 0;
}
