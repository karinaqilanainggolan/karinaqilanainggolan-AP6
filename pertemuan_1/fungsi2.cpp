#include<iostream>
#include<string>
using namespace std;
main(){
    char satu[20] = " aqila";
    char dua[20] = "karin";
    strcat(satu,dua);
    cout<<"Hasil penggabungannya :"<<satu<<endl;
    cout<<"jika diubah menjadi huruf kapital semua :";
    cout<<strupr(satu)<<endl;
    cout<<"jika diubah menjadi huruf kecil semua :";
    cout<<strlwr(satu)<<endl;
    getchar();
}