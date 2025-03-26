
#include <bits/stdc++.h>

using namespace std;

//For matrix we need to pass the number of elements per row or the col number in the function
//Because matrix use row Pointer

void matrixPointer(int mat[][4], int row, int col) {
    
    //Address of the Rows

    cout << "0th Row Address: " << mat << endl;
    cout << "1th Row Address: " << mat + 1 << endl;
    cout << "2th Row Address: " << mat + 2 << endl;
    cout << "3th Row Address: " << mat + 3 << endl<<endl;
    
    //Address of the first value of each rows
    
    cout << "0th Row Value: " << *mat << endl;
    cout << "1th Row Value: " << *(mat + 1) << endl;
    cout << "2th Row Value: " << *(mat + 2) << endl;
    cout << "3th Row Value: " << *(mat + 3) << endl;
    
    cout<< "Value of mat[2][3]: "<< *(*(mat +2) + 3);

}

//Matrix size has to be given when declared

int main()
{
    int mat[4][4] = {
        {
            1,
            2,
            3,
            4
        },
        {
            5,
            6,
            7,
            8
        },
        {
            9,
            10,
            11,
            12
        },
        {
            13,
            15,
            14,
            16
        }
    };

    matrixPointer(mat, 4, 4);

    return 0;

}