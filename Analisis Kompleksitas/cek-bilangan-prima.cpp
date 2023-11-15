#include <iostream>
#include <cmath>

using namespace std;

bool prima(int &a)
{
    int akar = sqrt(a);
    for (int i = 2; i <= akar; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (prima(arr[i]))
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }

    return 0;
}