/* // # Dynamic Memory  / alokasi memori dinamis
?   cara untuk mengalokasikan memori selama runtime program sehingga dapat mengatur ukuran memori
?   yang dibutuhkan berdasarkan kebutuhan saat program berjalan

    ! Operator `new` digunakan untuk mengalokasikan memori secara dinamis
    ! Operator `delete` digunakan untuk membebaskan memori setelah dialokasikan untuk mencegah kebocoran memori (memory leak).
*/
#include <iostream>
using namespace std;
int main(){

  int size = 8;     //deklarasi variabel yang akan dialokasikan

  //pointer '*p' pegang alamat memori dari variabel 'size' yang dialokasikan. jadi '*p' dapat menyimpan 8 item.
  int *p = new int[size]; //Membuat pointer p yang menunjuk ke array integer dengan ukuran size yang ditentukan (8 dalam hal ini).
                          
  // 
  p[0] = 100;
  p[1] = 200;
  p[2] = 300;
  p[4] = 400;

  cout<<*(p+2)<<" ";
  cout<<*(p+3)<<" ";
  cout<<*(p+4)<<" ";
  cout<<*(p+5)<<" ";

  delete[]p;
}