#include <iostream>
#include <conio.h>

using namespace std;

int main(){
   string alphabet[3][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"},
        {"I", "J", "K", "L"}
 
    };


    for(int h = 0;h < 3; h++){
        for(int k=0;k<4;k++){
            cout <<"|" << alphabet[h][k]<< "|";
        }
        cout << endl;

}
  return 0;

}
