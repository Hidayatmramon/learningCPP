//tolong inputkan 20 data angka, lalu dari ke 20 data angka yang sudah di inputkan kita jumlahkan semua
#include <iostream>

using namespace std;

int main(){
    int a[20];
    
    cout << "PROGRAM MENENTUKAN ANGKA GANJIL" << endl;
    cout << "===============================" << endl;

    for(int i = 0; i < 20; i++){
        cout << "Masukkan bilangan: ";
        cin >> a[i];
    }

    for(int i = 0; i < 20; i++){
        if(a[i]%2){
            cout << a[i] << " adalah bilangan ganjil" << endl;
        }
        else{
            cout << a[i] << " adalah bilangan genap" << endl;
 }
}
}