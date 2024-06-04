#include <stdio.h>

int main() {
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World\n"); //menampilkan "Hello World"

    //memasukkan nama
    printf("Masukkan Nama: ");
    scanf("%s", &nama);
    gets(nama);     // gets : get string

    //memasukkan NIM
    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    //memasukkan KOM
    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    //memasukkan IP
    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama); // puts: put string

    printf("NIM : %d\n", nim); //Menampilkan nama yang telah dimasukkan
    printf("KOM : %c\n", kom); //Menampilkan KOM yang telah dimasukkan
    printf("IP : %.2f\n", ip); //Menampilkan IP yang telah dimasukkan
}

