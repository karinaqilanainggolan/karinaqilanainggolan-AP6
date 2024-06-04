#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    int nim;
    char kom;
    float ip;

    system("CLS"); //Membersihkan Layar

    cout << "Hello World" << endl; //menampilkan "Hello World"

    //memasukkan nama
    cout << "Masukkan Nama : "; //
    cin >> nama;
    getline(cin, nama); //membaca seluruh baris

    //memasukkkan NIM
    cout << "Masukkan NIM : ";
    cin >> nim;

    //memasukkan KOM
    cout << "Masukkan KOM : ";
    cin >> kom;

    //memasukkan IP
    cout << "Masukkan IP : ";
    cin >> ip;

    system("CLS");

    cout << "Nama : " << nama << endl; // Menampilkan nama yang telah dimasukkan
    cout << "NIM : " << nim << endl; //Menampilkan NIM yang telah dimasukkan
    cout << "KOM : " << kom << endl;//Menampilkan NIM yang telah dimasukkan

    cout << fixed << setprecision(2); //agar memiliki dua angka di belakang koma

    cout << "IP : " << ip << endl;//Menampilkan IP yang telah dimasukkan

    return 0;
}