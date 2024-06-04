#include <iostream>

using namespace std;

int main(){
    system("cls");

    int number = 16;
    int*ptrnumber = &number;

    cout<< "isi variabel number : " << number << endl;
    cout<< "alamat variabel number : " << &number <<endl;
    cout<< "isi variabel pttrnumber : " << ptrnumber <<endl;
    cout<<"isi variabel yang ditunjuk ptrnumber : "<<ptrnumber <<endl;
}