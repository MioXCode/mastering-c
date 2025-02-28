/*
 * Program konversi suhu antara Celsius dan Fahrenheit
 * Program ini memungkinkan pengguna untuk:
 * 1. Memilih unit suhu awal (Celsius atau Fahrenheit)
 * 2. Memasukkan nilai suhu
 * 3. Mendapatkan hasil konversi ke unit suhu yang lain
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Deklarasi variabel
    char unit;  // Untuk menyimpan pilihan unit suhu (C/F)
    float temp; // Untuk menyimpan nilai suhu

    // Meminta input unit suhu dari user
    printf("\nIs the temperature in (F) or (C): ");
    scanf(" %c", &unit);

    // Konversi input ke huruf kapital
    unit = toupper(unit);

    // Proses konversi berdasarkan unit yang dipilih
    if (unit == 'C')
    {
        // Konversi dari Celsius ke Fahrenheit
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; // Rumus: °F = (°C × 9/5) + 32
        printf("\nThe temp in Fahrenheit is: %.1f\n", temp);
    }
    else if (unit == 'F')
    {
        // Konversi dari Fahrenheit ke Celsius
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9; // Rumus: °C = (°F - 32) × 5/9
        printf("\nThe temp in Celsius is: %.1f\n", temp);
    }
    else
    {
        // Pesan error jika input unit tidak valid
        printf("\n'%c' is not a valid unit of measurement\n", unit);
    }

    return 0;
}
