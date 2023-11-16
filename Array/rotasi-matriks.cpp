#include <iostream>

using namespace std;

int main()
{
    int baris, kolom, i, j;
    cin >> baris >> kolom;

    int matriks[baris][kolom];

    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            cin >> matriks[i][j];
        }
    }

    for (j = 0; j < kolom; j++)
    {
        for (i = baris - 1; i >= 0; i--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}