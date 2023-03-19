#include <iostream>

using namespace std;
int main(){

    int nilai;

    cout << "Input Nilai Anda: ";
    cin >> nilai;

  if(nilai > 100){
    cout << "input anda tidak sesuai" << endl;  
  }
  else if (nilai = 100 ) {
    cout << "Selamat anda rangking A+!" << endl;  
  }
  else if (nilai >= 90 && nilai < 95) {
   cout << "Selamat anda rangking A!" << endl;  
} 
  else if (nilai >= 80 && nilai < 90) {
    cout << "Selamat anda rangking B" << endl;
  }
  else if (nilai >= 70 && nilai < 80) {
    cout << "Selamat anda rangking c" << endl;
  }
  else {
    cout << "SAYANG SEKALI KAMU DI RANKING D" << endl;
  }

}


