#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
};

typedef struct Mahasiswa data;

int main(void) {
    data mhs01;

    // Isi data mahasiswa
    for (int i = 0; i < 50; ++i) {
        mhs01.nama[i] = '\0'; // Nama diisi dengan NULL ('\0')
        mhs01.jurusan[i] = '\0'; // Jurusan diisi dengan NULL ('\0')
    }
    mhs01.nilai = 100;

    // Salin nama dan jurusan ke dalam struktur
    char nama[] = "Nadya";
    char jurusan[] = "Teknik Informatika";

    int i = 0;
    while (nama[i] != '\0') {
        mhs01.nama[i] = nama[i];
        ++i;
    }

    i = 0;
    while (jurusan[i] != '\0') {
        mhs01.jurusan[i] = jurusan[i];
        ++i;
    }

    printf("%s adalah mahasiswa jurusan %s ", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i \n", mhs01.nilai);

    return 0;
}
