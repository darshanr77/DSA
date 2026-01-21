#include <iostream>
using namespace std;

// travelling the nXm matrix in spiral or jalebi shape
// order: left → right, top → bottom, right → left, bottom → top

void spiralMat(int mat[][4], int n, int m){

    int top = 0;        // starting row index
    int bottom = n - 1; // ending row index
    int left = 0;       // starting column index
    int right = m - 1;  // ending column index

    // loop until all elements are printed
    while(top <= bottom && left <= right){

        //  Print top row (left to right)
        for(int col = left; col <= right; col++){
            cout << mat[top][col] << " ";
        }
        top++;   // move top boundary down


        //  Print right column (top to bottom)
        for(int row = top; row <= bottom; row++){
            cout << mat[row][right] << " ";
        }
        right--; // move right boundary left


        // Print bottom row (right to left)
        if(top <= bottom){                             // prints until 0 <= m-1
            for(int col = right; col >= left; col--){
                cout << mat[bottom][col] << " ";
            }
            bottom--; // move bottom boundary up
        }


        // Print left column (bottom to top)
        if(left <= right){                            // prints until 0 <= n-1
            for(int row = bottom; row >= top; row--){
                cout << mat[row][left] << " ";
            }
            left++; // move left boundary right
        }
        
    }
    cout<<endl;
}

int main(){

    int mat[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14,15,16}
    };

    spiralMat(mat, 4, 4);
    return 0;
}
