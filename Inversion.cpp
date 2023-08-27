#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void divideRow(double rows[COLS + COLS] , double divide){
    for(int i = 0 ; i < COLS + COLS ; i++){
        rows[i] /= divide;
    }
}

void subtractRows(double target[COLS + COLS] , double source[COLS + COLS] ,double factor){
    for(int i = 0 ; i < COLS + COLS ; i++){
        target[i] -= factor * source[i];
    }
}

void InversionMatrix(double Mat[ROWS][COLS + 1]){
    double Solve[ROWS][COLS + COLS];
    double Ans[ROWS][1];
    double Answer[ROWS][1];

    for(int i = 0 ; i < ROWS ; i++){
        for(int j = 0 ; j < COLS; j++){
            Solve[i][j] = Mat[i][j];
            if(i == j){
                Solve[i][j + COLS] = 1;
            }
            if(i != j){
                Solve[i][j + COLS] = 0;
            }
        }
    }

    for(int i = 0 ; i < ROWS ; i++){
        Ans[i][0] = Mat[i][COLS];
    }
    
    for(int i = 0 ; i < ROWS ; i++){
        divideRow(Solve[i] , Solve[i][i]);
        for(int j = 0 ; j < ROWS ; j++){
            if(j != i){
                subtractRows(Solve[j] , Solve[i] , Solve[j][i]);
                }
        }
    }

    //find x
    for(int i = 0 ; i < ROWS ; i++){
        double temp = 0;
        for(int j = 0 ; j < COLS ; j++){
            temp += Solve[i][COLS + j] * Ans[j][0];
        }
        Answer[i][0] = temp;
        cout << "x" << i << " = " << Answer[i][0] << endl;
    }
}

int main(){
    double Linear[3][4] = {
        {-2 , 3 , 1 , 9},
        {3 , 4 , -5 , 0},
        {1 , -2 , 1 , -4},
    };
    InversionMatrix(Linear);
    return 0;
}