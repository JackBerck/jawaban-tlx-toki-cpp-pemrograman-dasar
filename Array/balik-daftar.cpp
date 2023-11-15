#include <iostream>

using namespace std;

int main()
{
    int n, arr[100], i = 0;

    while (cin >> arr[i])
    {
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}