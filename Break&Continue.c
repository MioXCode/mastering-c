#include <stdio.h>

/**
 * Program untuk menampilkan angka 1-20 kecuali angka 13
 * Program ini menggunakan statement continue untuk melompati angka 13
 *
 * Output:
 * - Menampilkan angka 1-20
 * - Ketika mencapai angka 13, akan menampilkan "Skipping 13..." dan melanjutkan ke angka berikutnya
 */
int main()
{
    // Loop dari 1 sampai 20
    for (int i = 1; i <= 20; i++)
    {
        // Melompati angka 13 menggunakan continue
        if (i == 13)
        {
            printf("Skipping 13...\n");
            continue; // Melanjutkan ke iterasi berikutnya
        }
        printf("%d\n", i); // Mencetak angka saat ini
    }

    return 0;
}
