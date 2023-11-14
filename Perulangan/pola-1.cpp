#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int x = k;
    for (int i = 1; i <= n; i++)
    {
        if (i == k)
        {
            cout << "*";
            k += x;
        }
        else
        {
            cout << i;
        }

        if (i < n)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
