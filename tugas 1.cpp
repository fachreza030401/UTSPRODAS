#include <iostream>
using namespace std;
//BUATLAH SOAL DENGAN MENGGUNAKAN WHILE
int main() {
 char huruf;
 cout<<"Masukkan Tebakan Anda : ";
 cin>>huruf;
 
 while(huruf!='q') {
  cout<<"Maaf Anda Salah \n";
  cout<<"Masukkan Tebakan Anda : ";
  cin>>huruf;
  
 }
  cout<<"Anda benar!!!!!";
  return 0;
 }
