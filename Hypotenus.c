/*
Program untuk menghitung sisi miring (hipotenusa) segitiga siku-siku
menggunakan Teorema Pythagoras: c² = a² + b²
dimana:
- a dan b adalah panjang sisi tegak segitiga
- c adalah panjang sisi miring (hipotenusa)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Deklarasi variabel untuk menyimpan panjang sisi
    double A; // Panjang sisi pertama
    double B; // Panjang sisi kedua
    double C; // Panjang hipotenusa

    // Meminta input dari user untuk sisi A
    printf("Enter a side A: ");
    scanf("%lf", &A);

    // Meminta input dari user untuk sisi B
    printf("Enter a side B: ");
    scanf("%lf", &B);

    // Menghitung hipotenusa menggunakan rumus Pythagoras
    C = sqrt(A * A + B * B);

    // Menampilkan hasil perhitungan
    printf("Side C: %lf", C);

    return 0;
}
