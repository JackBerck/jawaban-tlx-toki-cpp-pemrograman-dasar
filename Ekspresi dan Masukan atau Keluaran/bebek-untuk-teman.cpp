#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int hasil = a / b;
    int sisa = a % b;

    cout << "masing-masing " << hasil << endl;
    cout << "bersisa " << sisa;

    return 0;
}