#include <stdio.h>

// Buat pendek aja, lld alias buat long long int
#define lld long long int

int main()
{
    int n;
    scanf("%d", &n);
    for (int tc = 0; tc < n; tc++)
    {
        lld a, b;
        scanf("%lld %lld", &a, &b);
        lld res = 0;

        lld s;
        // multiplier berguna untuk menghitung angka yg punya digit lebih dari 1
        int m = 1;
        while (a || b)
        {
            // digit terakhir a ditambah digit terakhir a (99 % 10 = 9, 532 % 10 = 2)
            s = a % 10 + b % 10;
            // di modulo 10 supaya dapat digit terakhir dari penjumlahan atas (misal 9 + 9 = 18 -> 18 % 10 = 8)
            s %= 10;

            // hasil penjumlahan digit akhir mod 10 dikali dengan multiplier
            res += s * m;

            // Hapus digit terakhir a dan b (99 / 10 = 9 (representasi integer))
            a /= 10;
            b /= 10;

            // m dikali 10 (m = 10; m * 10 = 100 (3 digit); m * 10 = 1000 (4 digit))
            m *= 10;
        }

        printf("Case #%d: %lld\n", tc + 1, res);
    }

    return 0;
}