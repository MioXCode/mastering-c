#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Program untuk mendemonstrasikan berbagai operasi string dalam bahasa C
 * Termasuk fungsi-fungsi untuk manipulasi string seperti:
 * - Konversi huruf besar/kecil
 * - Pembalikan string
 * - Pengaturan karakter
 * - Operasi string standar (strcat, strcmp, dll)
 */

/**
 * Mengubah semua karakter dalam string menjadi huruf kecil
 * @param str String yang akan dikonversi
 */
void toLower(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

/**
 * Mengubah semua karakter dalam string menjadi huruf besar
 * @param str String yang akan dikonversi
 */
void toUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

/**
 * Membalik urutan karakter dalam string
 * Alternatif untuk fungsi strrev yang tidak standar
 * @param str String yang akan dibalik
 */
void strReverse(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

/**
 * Mengatur semua karakter dalam string menjadi karakter tertentu
 * @param str String yang akan diubah
 * @param ch Karakter yang akan digunakan
 */
void strSet(char *str, char ch)
{
    while (*str)
    {
        *str = ch;
        str++;
    }
}

/**
 * Mengatur n karakter pertama dalam string menjadi karakter tertentu
 * @param str String yang akan diubah
 * @param ch Karakter yang akan digunakan
 * @param n Jumlah karakter yang akan diubah
 */
void strNSet(char *str, char ch, int n)
{
    for (int i = 0; i < n && str[i] != '\0'; i++)
    {
        str[i] = ch;
    }
}

/**
 * Fungsi utama yang mendemonstrasikan penggunaan fungsi-fungsi manipulasi string
 */
int main()
{
    // Inisialisasi string untuk demonstrasi
    char string1[50] = "Tomio";
    char string2[] = "Niam";

    // Demonstrasi konversi huruf
    toLower(string1); // Mengubah string1 menjadi huruf kecil
    toUpper(string2); // Mengubah string2 menjadi huruf besar

    // Demonstrasi penggabungan string
    strcat(string1, string2);     // Menggabungkan string2 ke string1
    strncat(string1, string2, 1); // Menggabungkan karakter pertama string2 ke string1

    // Demonstrasi penyalinan string
    strcpy(string1, string2);     // Menyalin string2 ke string1
    strncpy(string1, string2, 1); // Menyalin karakter pertama string2 ke string1
    string1[1] = '\0';            // Memastikan null-termination untuk mencegah masalah buffer

    // Demonstrasi pengaturan karakter
    strSet(string1, '?');     // Mengatur semua karakter string1 menjadi '?'
    strNSet(string1, 'x', 1); // Mengatur karakter pertama string1 menjadi 'x'
    strReverse(string1);      // Membalik isi string1

    // Demonstrasi fungsi perbandingan dan pengukuran string
    int length = strlen(string1);            // Menghitung panjang string1
    int cmp1 = strcmp(string1, string2);     // Membandingkan string1 dan string2 (case-sensitive)
    int cmp2 = strncmp(string1, string2, 1); // Membandingkan karakter pertama kedua string
    int cmp3 = strcasecmp(string1, string2); // Perbandingan tanpa memperhatikan huruf besar/kecil (POSIX)

    // Menampilkan hasil
    printf("Final Result: %s\n", string1);
    printf("Length: %d\n", length);
    printf("strcmp: %d\n", cmp1);
    printf("strncmp: %d\n", cmp2);
    printf("strcasecmp: %d\n", cmp3);

    return 0;
}
