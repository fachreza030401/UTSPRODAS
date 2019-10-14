#include <iostream>

using namespace std;

int main(){
     int deret;

     cout<<"\t== Program Deret Angka (Do-While) ==\n\n";
     cout<<"Banyak deret Angka yang akan ditampilkan : ";
     cin>>deret;
     cout<<endl;

     do{
          cout<<deret<<"  ";

          // Menurunkan nilai variabel deret
          // deret-- ==> deret=deret-1
          deret--;
     }while(deret>0);

     cout<<"\n\n== Deret Selesai Ditampilkan ==\n";

     return 0;
}
