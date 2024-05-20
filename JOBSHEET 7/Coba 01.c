// create by Nadya_23343088
#include <stdio.h>
#include <stdlib.h>
#define ukuran 5

void tambah();
void hapus();
void tampilkan();
int queue[ukuran];
int front = -1, rear = -1;

int main()
{
    int pilihan;
    while (1)
    {
        printf("\n************************* Main Menu *****************************\n");
        printf("===============================================================\n");
        printf("1. Tambah sebuah elemen\n");
        printf("2. Hapus sebuah elemen\n");
        printf("3. Tampilkan antrian\n");
        printf("4. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            tambah();
            break;
        case 2:
            hapus();
            break;
        case 3:
            tampilkan();
            break;
        case 4:
            exit(0);
        default:
            printf("\nMasukkan pilihan yang sesuai\n");
        }
    }
    return 0;
}

void tambah()
{
    int item;
    if (rear == ukuran - 1)
    {
        printf("\nAntrian penuh\n");
        return;
    }
    else
    {
        if (front == -1)
            front = 0;
        printf("\nMasukkan elemen yang ingin ditambahkan: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
}

void hapus()
{
    if (front == -1 || front > rear)
    {
        printf("\nAntrian kosong\n");
        return;
    }
    else
    {
        printf("\nElemen yang dihapus adalah %d\n", queue[front]);
        front++;
    }
}

void tampilkan()
{
    if (front == -1)
    {
        printf("\nAntrian kosong\n");
        return;
    }
    printf("\nElemen- elemen antrian adalah:\n");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}
