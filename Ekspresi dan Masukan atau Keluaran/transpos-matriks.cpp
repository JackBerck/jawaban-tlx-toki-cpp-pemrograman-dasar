#include <iostream>

using namespace std;

int main()
{
    int matriks[3][3], temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriks[i][j];
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}