#include <iostream>

int main() {
    int i, j, n;
    std::cout << "Masukkan bilangan: ";
    std::cin >> n;

    // Bagian pertama: mencetak segitiga dari atas ke bawah
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= i) {
            std::cout << "*";
            j++;
        }
        std::cout << "\n";
        i++;
    }

    // Bagian kedua: mencetak segitiga dari bawah ke atas
    i = n;
    while (i >= 1) {
        j = 1;
        while (j <= i) {
            std::cout << "*";
            j++;
        }
        std::cout << "\n";
        i--;
    }

    return 0;
}
