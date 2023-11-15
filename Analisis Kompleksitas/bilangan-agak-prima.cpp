#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int a, c, totalFaktor, tes, faktor;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> c;
        totalFaktor = 0;
        faktor = trunc(c / 2);
        tes = 3;
        if (c % 2 == 0 && c != 2 || c == 1)
        {
            totalFaktor++;
        }
        while (tes <= faktor)
        {
            if (c % tes == 0)
            {
                totalFaktor++;
                if (totalFaktor > 2)
                {
                    break;
                }
            }
            tes++;
        }
        if (totalFaktor > 2)
        {
            printf("BUKAN\n");
        }
        else
        {
            printf("YA\n");
        }
    }
}