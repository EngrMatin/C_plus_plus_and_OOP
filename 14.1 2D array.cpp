#include<bits/stdc++.h>
using namespace std;

void printArray(int *array[][], int row, int col);

int main()
{
    int row, col;
    cin >> row >> col;

    int arr[row][col];
    for(int i=0; i<row; i++)         // Row Major Traversal
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    printArray(*arr, row, col);

    return 0;
}

void printArray(int *array[], int row, int col)
{
    for(int i=0; i<row; i++)         // Row Major Traversal
    {
        for(int j=0; j<col; j++)
        {
            cout << *((array+i*col) + j) << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}
