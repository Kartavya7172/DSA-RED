#include<iostream>
using namespace std;

int main()
{
    int **arr = new int*[5];
    for(int row=0;row<5;row++)
    {
        arr[row] = new int[3];
    }

    
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 3; col++) {
            arr[row][col] =2; 
        }
    }

    
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    
    for(int row = 0; row < 5; row++) {
        delete[] arr[row]; 
    }
    delete[] arr; 

}