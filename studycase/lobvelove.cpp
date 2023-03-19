#include <iostream>
using namespace std;
 
int main () {
int nilai = 0,i, min = 0;
 
cout << "Masukan jumlah yang ingin di input :";
cin >> nilai;
int data[nilai];

for(i=0; i<nilai; i++) {
cout << "Input Nilai ke ";
cout << i+1;
cout << " : ";
cin >> data[i];
}
min = data[0];
for(i=0; i<nilai; i++) {
if (min > data[i]) {
min = data[i];
}
}
cout << "================================" << endl;
cout << "Nilai Terkecil :" << min<< endl;
cout << "================================"<< endl;
}