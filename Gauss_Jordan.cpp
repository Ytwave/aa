#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void divideRow(double rows[COLS] , double divide){
    for(int i = 0 ; i < COLS ; i++){
        rows[i] /= divide;
    }
}

void subtractRows(double target[COLS] , double source[COLS] ,double factor){
    for(int i = 0 ; i < COLS ; i++){
        target[i] -= factor * source[i];
    }
}

void GaussJordan(double Mat[ROWS][COLS]){
    for(int i = 0 ; i < ROWS ; i++){
        divideRow(Mat[i] , Mat[i][i]);
        for(int j = i + 1 ; j < COLS ; j++){
            subtractRows(Mat[j] , Mat[i] , Mat[j][i]);
        }
    }
    
    for(int i = ROWS - 1 ; i >= 0 ; i--){
        for(int j = i + 1 ; j < COLS - 1 ; j++){
            Mat[i][COLS - 1] -= Mat[i][j] * Mat[j][COLS - 1];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        cout << "x" << i + 1 << " = " << Mat[i][COLS - 1] << endl;
    }
}

int main(){
    double Linear[3][4] = {
        {-2 , 3 , 1 , 9},
        {3 , 4 , -5 , 0},
        {1 , -2 , 1 , -4},
    };
    GaussJordan(Linear);
    return 0;
}