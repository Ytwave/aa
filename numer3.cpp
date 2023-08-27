// #include <iostream>
// #include <cmath>

// using namespace std;

// double func(double x){
// 	double y = (x+0.5)/2;
//     return y;
// }

// int main(){
//     double xold = 0;
//     double xnew;
//     double epsilon = 0.000001;
//     xnew = func(xold);
//     while(abs((xnew - xold)/xnew)*100 > epsilon){
//         xold = xnew;
//         xnew = func(xold);
//     }
//     cout<<xold<<endl;
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

double func(double x){
    double y = ((x*x)-7)/(2*x);
    return y;
}

int main(){
    double epsilon = 0.000001;
    double xnew;
    double xold = 2.0;
    xnew = xold - func(xold);
    while(abs((xnew - xold)/xnew)*100 > epsilon){
        xold = xnew;
        xnew = xold - func(xold);
        cout<<xold<<endl;
    }
    cout<<xnew<<endl;
    return 0;
}
