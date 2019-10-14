//BUATLAH PROGRAM DENGAN MENGGUNAKAN IF ELSE
#include <iostream>

using namespace std;

int main()
{
     int bilangan;

     // Memberikan informasi agar user memasukkan
     // Sebuah bilangan bulat
     cout<<"\t== Program Bilangan Positif ==\n\n";
     cout<<"Masukkan bilangan : ";

     // Membaca nilai yang dimasukkan dari keyboard
     // Dan disimpan ke variabel Bilangan
    cin>>bilangan;

     // Program ini merupakan contoh if dua kondisi
     if(bilangan > 0){
          cout<<"\nAnda memasukkan bilangan Positif\n";
          cout<<"Bilangan tersebut adalah "<<bilangan;
     }
     else{
          cout<<"\nAnda memasukkan bilangan kurang dari 1";
          cout<<"\nBilangan tersebut adalah "<<bilangan;
     }
 
     return 0;
}
