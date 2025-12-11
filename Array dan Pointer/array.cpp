/* // # Array
  *fungsi
  -untuk menyimpan mutiple nilai dalam satu variabel

  *contoh
  int num[5];
   -nama arraynya 'num'
   -tipe datanya int
   -jumlah data nilai yang dapat disimpan sebanyak 5 item

  *cara mengakses nilainya menggunakan alamat index array yang dimulai dari 0
  //contoh
  string name[4] = {'jojo','kepin','edamame', 'yuga'};
  index 0 = 'jojo'
  index 1 = 'kepin'
  index 2 = 'edamame'
  index 3 = 'yuga'

*/
#include <iostream>
using namespace std;
int main(){
  string names[4] = {"jojo","kepin","edamame","yuga"};
  cout<<names[3]<<endl; // yuga

}