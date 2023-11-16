#include <iostream>

using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }

    int hasil[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                hasil[i][j] += a[i][k] * b[k][j];
            }
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}