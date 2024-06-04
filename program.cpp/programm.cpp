#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(std::cin, sentence);


    for (char  : sentence) {
        c = std::toupper(c);
    }

    cout << "Output: " << sentence << :endl;

    return 0;
}