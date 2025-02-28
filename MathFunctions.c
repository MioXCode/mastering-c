#include <stdio.h>
#include <math.h>

// Program untuk mendemonstrasikan berbagai fungsi matematika dalam C
int main()
{
    // Menghitung akar kuadrat dari 9
    double A = sqrt(9);

    // Menghitung 2 pangkat 4 (2^4)
    double B = pow(2, 4);

    // Membulatkan 3.14 ke bilangan bulat terdekat
    int C = round(3.14);

    // Membulatkan 3.14 ke atas
    int D = ceil(3.14);

    // Membulatkan 3.99 ke bawah
    int E = floor(3.99);

    // Menghitung nilai absolut dari -100
    double F = fabs(-100);

    // Menghitung logaritma natural (basis e) dari 3
    double G = log(3);

    // Menghitung sinus dari 45 derajat
    double H = sin(45);

    // Menghitung cosinus dari 45 derajat
    double I = cos(45);

    // Menghitung tangen dari 45 derajat
    double J = tan(45);

    // Mencetak nilai A (hasil akar kuadrat dari 9)
    printf("\n%lf", A);

    return 0;
};