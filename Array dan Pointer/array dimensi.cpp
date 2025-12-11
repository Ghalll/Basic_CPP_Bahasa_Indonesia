/* // # Multidimensi array 
? array dapat memiliki sejumlah dimensi 2D dan 3D
?   array multidimensi adalah struktur data dalam pemrograman yang dapat menyimpan data
?   dalam bentuk matriks atau tabel dengan lebih dari 1 dimensi

*/

#include <iostream>
using namespace std;
int main(){

  //array 2 D
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };

  //array 3D
  int cube[2][3][3] = {
    {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    },
    {
      {10, 11, 12},
      {13, 14, 15},
      {16, 17, 18}
    }
  };

  //akses data array 2D
  cout<<matrix[1][2]; // 6 // index [1] adalah baris matrik dan index [2] adalah kolom matrik 
  
  cout<<endl;

  //akses data array 3D
  cout<<cube[1][2][1]; // 17
  /* index [1] menunjukan kubus kedua
     index [2] menunjukan baris ketiga dari kubus kedua
     index [1] menunjukan kolom kedua dari baris ketiga pada kubus kedua
  */

}