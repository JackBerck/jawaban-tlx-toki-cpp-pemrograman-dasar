#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n;
    cin >> n;

    int f = floor(n);
    int c = ceil(n);
    cout << f << " " << c;

    return 0;
}