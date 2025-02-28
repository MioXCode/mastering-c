#include <stdio.h>
#include <string.h>

/**
 * Program untuk mengelola data mahasiswa menggunakan array of struct
 * Program ini menyimpan nama dan IPK mahasiswa dalam struktur data
 * dan menampilkannya dalam format tabel
 */

/**
 * Struktur data untuk menyimpan informasi mahasiswa
 * @field name: array karakter untuk menyimpan nama mahasiswa (maksimal 25 karakter)
 * @field gpa: nilai float untuk menyimpan IPK mahasiswa (skala 0.0 - 4.0)
 */
struct Student
{
    char name[25]; // Array to store the student's name
    float gpa;     // Variable to store the student's GPA
};

/**
 * Fungsi utama program
 * Menginisialisasi data mahasiswa, menyimpan dalam array,
 * dan menampilkan dalam format tabel
 */
int main()
{
    // Initialize student records with realistic GPA values
    struct Student student1 = {"Niam", 4.0};  // Mahasiswa dengan IPK sempurna
    struct Student student2 = {"Adi", 3.8};   // Mahasiswa dengan IPK sangat baik
    struct Student student3 = {"Verdi", 3.5}; // Mahasiswa dengan IPK baik
    struct Student student4 = {"Abi", 3.9};   // Mahasiswa dengan IPK sangat baik

    // Array of student structures - Menyimpan semua data mahasiswa dalam satu array
    struct Student students[] = {student1, student2, student3, student4};

    // Calculate the number of students - Menghitung jumlah mahasiswa secara otomatis
    int numStudents = sizeof(students) / sizeof(students[0]);

    // Print student information in tabular format
    printf("Name        \tGPA\n");
    printf("----------------------\n");

    // Loop untuk menampilkan data setiap mahasiswa
    for (int i = 0; i < numStudents; i++)
    {
        printf("%-12s\t%.2f\n", students[i].name, students[i].gpa);
    }

    return 0;
}
