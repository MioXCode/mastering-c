#include <stdio.h>

/**
 * Struktur User untuk menyimpan data pengguna
 * @param id - ID unik pengguna
 * @param name - Nama pengguna (maksimal 25 karakter)
 * @param password - Password pengguna (maksimal 25 karakter)
 */
typedef struct
{
    int id;
    char name[25];
    char password[25];
} User;

/**
 * Fungsi utama program
 * Mendemonstrasikan penggunaan struktur User dengan membuat dan menampilkan data 2 pengguna
 */
int main()
{
    // Inisialisasi data user1 dan user2
    User user1 = {1, "Niam", "password123"};
    User user2 = {2, "Tomio", "password123"};

    // Menampilkan data user1
    printf("%d\n", user1.id);
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);

    printf("\n");

    // Menampilkan data user2
    printf("%d\n", user2.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);

    return 0;
}
