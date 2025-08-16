#include <bits/stdc++.h>
using namespace std;

void print_matrix(int matrix[3][3]){
for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    cout << "Enter the elements of the matrix" << endl;

    // Creating a 2D array:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }



    // Printing a 2D Array:
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



    // cout << endl;
    // Matrix in spiral form:
    // 1. Left to right Pattern:
    // bool flag = 1;
    // for (int i = 0; i < 3; i++){
    //     if (flag == 1){
    //         for (int j = 0; j < 3; j++){
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout << endl;
    //         flag = 0;
    //     }else{
    //         for(int j = 2; j >= 0; j--){
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout << endl;
    //         flag = 1;
    //     }
    // }



    // cout << endl;
    // 2.Top to down pattern:
    // bool flag2 = 1;
    // for(int i=0 ; i<3 ; i++){
    //     if(flag2 == 1){
    //         for(int j=0 ; j<3 ; j++){
    //             cout << matrix[j][i] << " ";
    //         }
    //         cout << endl;
    //         flag2 = 0;
    //     }
    //     else{
    //         for(int j=2 ; j>=0 ; j--){
    //             cout << matrix[j][i] << " ";
    //         }
    //         cout << endl;
    //         flag2 = 1;
    //     }
    // }



    // Rotate Matrix by 90 degrees clockwise:
    // Method 1:
    // int matrix1[3][3];
    // for(int i=0 ; i<3 ; i++){
    //     for(int j=0 ; j<3 ; j++){
    //         matrix1[j][2-i] = matrix[i][j];
    //     }
    // }
    // print_matrix(matrix1);



    // Method 2:
    // 1st transpose the matrix 
    // and the reverse each row



    // Search in sorted row/column matrix:
    int a=0 ;
    int b=2;
    int target = 9;
    while(a<=2 && b>=0){
        if(matrix[a][b] == target){
            cout << "Element found at the index:" << a << " " << b << endl;
            return 0;
        }
        else if(matrix[a][b] > target){
            b--;
        }
        else if(matrix[a][b] < target){
            a++;
        }
        else{
            cout << "Element is not present in the matrix" << endl;
        }
    }



    return 0;
}