#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b, total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        total += b;
    }
    cout << total;

    return 0;
}