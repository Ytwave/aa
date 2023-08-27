#include <iostream>
#include <cmath>
using namespace std;

double func(double x){
    return pow(x , 2) - 7;
}
double cal(double x , double y){
    return y - func(y)*((y - x) / (func(y) - func(x)));
}

int main(){
    double epsilon = 0.000001;
    double OldX = 1.0;
    double NewX = 3.0;
    while(abs((NewX - OldX)/NewX)*100 > epsilon){
        double x = NewX;
        NewX = cal(OldX , NewX);
        OldX = x;
    }
	cout << NewX << endl;
    return 0;
}

