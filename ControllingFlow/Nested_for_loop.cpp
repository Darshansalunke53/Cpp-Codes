#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()

{
    cout << "======================2D Array==========================" << endl;

    int arr[3][3]{{1, 2, 3}, {4, 5, 6}, {6, 7, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "=========================2D vector==========================" << endl;

    vector<vector<int> > arr1{{12, 13, 14}, {15, 16, 17}, {18, 19, 20}};

    for (auto ar : arr1)
    {
        for (auto val : ar)
        {
            cout << val;
        }
        cout << endl;
    }

    cout << "=========================Multiplication table===================" << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "------------------------------------" << endl;
    }

    return 0;
}