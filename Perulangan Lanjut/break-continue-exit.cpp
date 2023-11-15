#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i > 41)
        {
            cout << "ERROR";
            break;
        }
        if (i % 10 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}