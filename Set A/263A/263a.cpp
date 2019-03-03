#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int arr[6][6], c = 0, row, col;

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }

    if(arr[2][2] != 1)
        c = abs(abs(row - 2) + abs(col - 2));

    cout << c;
}
