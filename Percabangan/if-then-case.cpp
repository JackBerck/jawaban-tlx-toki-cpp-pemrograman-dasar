#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 1 && n < 10)
    {
        cout << "satuan";
    }
    else if (n >= 10 && n < 100)
    {
        cout << "puluhan";
    }
    else if (n >= 100 && n < 1000)
    {
        cout << "ratusan";
    }
    else if (n >= 1000 && n < 10000)
    {
        cout << "ribuan";
    }
    else if (n >= 10000 && n < 100000)
    {
        cout << "puluhribuan";
    }

    return 0;
}