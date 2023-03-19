#include <iostream>
using namespace std;
int main (){
    int arr[2][2];

    arr[0][0] = 15;
    arr[0][1] = 23;
    arr[1][0] = 40;
    arr[1][1] = 29;

    cout << "Isi variabel arr : " <<endl;
    cout << arr[0][0] << " " << arr[0][1] <<endl;
    cout << arr[1][0] << " " << arr[1][1] <<endl;

 return 0;
}