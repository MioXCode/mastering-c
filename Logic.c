/**
 * Program sederhana untuk menentukan kondisi cuaca berdasarkan suhu dan kondisi cerah
 * Program akan menampilkan pesan "The weather is good!" jika:
 * - Suhu antara 0-30 derajat Celsius, atau
 * - Cuaca sedang cerah (sunny = true)
 * Jika tidak memenuhi kondisi di atas, akan menampilkan "The weather is bad!"
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Inisialisasi variabel suhu (dalam Celsius)
    float temp = 25;
    // Inisialisasi variabel kondisi cerah
    bool suny = false;

    // Cek kondisi cuaca berdasarkan suhu dan kondisi cerah
    if (temp >= 0 && !temp <= 30 || suny)
    {
        printf("The weather is good!");
    }
    else
    {
        printf("The weather is bad!");
    }

    return 0;
}
