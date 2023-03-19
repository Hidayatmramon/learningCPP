#include <iostream>

using namespace std;

int main()
{
    string no;
    string no2;
    int umur,umur2,dav;


   cout << "Masukan nama anda: "; 
   cin >> no;
   cout << "Masukan nama temen anda: "; 
   cin >> no2;

   cout << "nama  anda: " << no;
   cout << "nama  temen anda: " << no2;

   cout << "Masukan umur anda: " << endl; 
   cin >> umur;
   cout << "Masukan umur anda: " << endl; 
   cin >> umur2;

   int hasil = umur * umur2;

   cout << "hasilnya: "<< hasil << endl;

   cout << "umur kak david:  " << endl; 
   cin >> dav;

      int hasil2 = hasil + dav;

         cout << "hasilnya: "<< hasil2 << endl;





}