#include <iostream>

using namespace std;
int main(){
    
    int n = 4;
    int*ptrn = &n;
    int**ptr_ptrn = &ptrn;

    cout<< "isi variabel n = " << n << endl;
    cout<< "alamat variabel n = "<< &n << endl;
    cout<< "isi variabel ptrn =" <<ptrn << endl;
    cout<< "isi variabel yang ditunjuk ptrn = " << *ptrn <<endl;
    cout<< "alamat variabel ptrn = " << &ptrn <<endl;
    cout<< "isi variabel ptr_ptrn = "<<ptr_ptrn = " << * ptr_ptrn <<endl;
    cout<< "isi variabel n diakses dari ptr_ptrn  = "<<**ptr_ptrn = "  <<endl;
    cout<< "alamat memori ptr_ptrn = "<< &ptr_ptrn <<endl;
}