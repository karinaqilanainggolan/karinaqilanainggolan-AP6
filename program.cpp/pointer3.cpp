#include <iostream>
using namespace std;
int main(){
    
    int* ptr = new int;
    *ptr = 24;
    cout<< "isi variabel ptr = " << ptr <<endl;
    cout<<"data yang ada di variabel ptr = "<< *ptr <<endl;
    delete ptr;
    cout<<" isi variabel ptr = "<<*ptr <<endl;
}