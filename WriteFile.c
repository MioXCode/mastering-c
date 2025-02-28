/**
 * Program untuk mendemonstrasikan operasi file dalam C
 * - Membuka file untuk ditambahkan (append mode)
 * - Menulis teks ke dalam file
 * - Menutup file
 * - Menghapus file
 */
#include <stdio.h>

int main()
{
    // Membuka file text.txt dalam mode append (a)
    // Mode append akan menambahkan teks di akhir file jika file sudah ada
    // Jika file belum ada, akan dibuat file baru
    FILE *pF = fopen("text.txt", "w");

    // Menulis teks ke dalam file menggunakan fprintf
    fprintf(pF, "Niam And Bocil");

    // Menutup file setelah selesai digunakan
    fclose(pF);

    // Mencoba menghapus file text.txt
    // remove() mengembalikan 0 jika berhasil menghapus file
    if (remove("text.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");
    }

    return 0;
}
