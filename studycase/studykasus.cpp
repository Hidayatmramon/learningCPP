#include <iostream>

using namespace std;
int main(){

    int harga,diskon;

    cout << "Input harga belanjaan anda yang harus di bayar Anda: ";
    cin >> harga;

  if (harga > 1000000) {
    diskon = harga - (0.3 * harga);
    cout << "anda mendapatkan diskon: 30%, dan yang harus anda bayar : rp. "<<diskon<< endl;
  }
  else if (harga >= 500000 && harga < 1000000 )
  {
    diskon = harga - (0.2 * harga);
    cout << "anda mendapatkan diskon: 20%, dan yang harus anda bayar : rp. "<<diskon<< endl;

  }
  
  else if (harga >= 100000 && harga < 500000 )
  {
    diskon = harga - (0.1 * harga);
    cout << "anda mendapatkan diskon: 10%, dan yang harus anda bayar : rp. "<<diskon<< endl;
  }
  else { //kondisi nilainya false
    cout << "anda tidak mendapatkan diskon atau anda salah input" << endl;
  }
  
}

