#include <iostream>

using namespace std;

// 6) Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// (a) Transpose of a matrix.
// (b) Addition of two matrices.
// (c) Multiplication of two matrices

int main()
{
    int non_zero_elem = 6;

    const int row_count = 6;
    const int column_count = 3;

    int sp_mat[6][3] = {
        {0, 2, 3},  
        {0, 4, 4},
        {1, 2, 5},
        {1, 3, 7},
        {3, 1, 2},
        {3, 2, 6}
    };


    // (a) Transpose of the sparse matrix //

    int trans_mat[column_count][row_count];

    for (int i = 0; i < column_count; i++)
    {
        for (int j = 0; j < row_count; j++)
        {
            
        }
    }






    return 0;
}