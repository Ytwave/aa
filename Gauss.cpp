#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void Gauss(double Mat[ROWS][COLS]) {
    double x1 , x2 , x3;
    double divide = Mat[0][0];
    for(int i = 0 ; i < COLS ; i++){
        Mat[0][i] = Mat[0][i] / divide;
    }
    divide = Mat[1][0];
    for(int i = 0 ; i < COLS ; i++){
        Mat[1][i] = Mat[1][i] / divide;
    }
    for(int i = 0 ; i < COLS ; i++){
        Mat[1][i] = Mat[1][i] - Mat[0][i];
    }
    divide = Mat[2][0];
    for(int i = 0 ; i < COLS ; i++){
        Mat[2][i] = Mat[2][i] / divide;
    }
    for(int i = 0 ; i < COLS ; i++){
        Mat[2][i] = Mat[2][i] - Mat[0][i];
    }
    divide = Mat[1][1];
    for(int i = 1 ; i < COLS ; i++){
        Mat[1][i] = Mat[1][i] / divide;
    }
    divide = Mat[2][1];
    for(int i = 1 ; i < COLS ; i++){
        Mat[2][i] = Mat[2][i] / divide;
    }
    for(int i = 1 ; i < COLS ; i++){
        Mat[2][i] = Mat[2][i] - Mat[1][i];
    }
    divide = Mat[2][2];
    for(int i = 2 ; i < COLS ; i++){
        Mat[2][i] = Mat[2][i] / divide;
    }
    x3 = Mat[2][3];
    divide = Mat[1][1];
    for(int i = 1 ; i < COLS ; i++){
        Mat[1][i] = Mat[1][i] / divide;
        
    }
    x2 = Mat[1][3] - Mat[1][2] ;
    x1 = Mat[0][3] - Mat[0][1]*x2 - Mat[0][2]*x3 ;
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    std::cout << "x3 = " << x3 << std::endl;
}

int main(){
    double Linear[ROWS][COLS] = {
        {-2, 3, 1, 9},
        {3, 4, -5, 0},
        {1, -2, 1, -4}
    };
    Gauss(Linear);
    return 0;
}

