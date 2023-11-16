#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[1001];
    memset(arr, 0, sizeof arr);

    for (i = 0; i < n; i++)
    {
        int bil;
        scanf("%d", &bil);
        arr[bil]++;
    }

    int maks = 0, ans = -1;
    for (i = 1; i <= 1000; i++)
    {
        if (maks <= arr[i])
        {
            maks = arr[i];
            ans = i;
        }
    }

    cout << ans;

    return 0;
    // jujur yang ini mayan susah... sampai ambil referensi kodingan dari YouTube
    // nama channel YouTube-nya Dicky Novanto
}