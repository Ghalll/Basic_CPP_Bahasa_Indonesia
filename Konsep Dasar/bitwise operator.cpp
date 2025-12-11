/* // # Bitwise Operator
? bitwise operator sekumpulan operaotor yang digunakan untuk memanipulasi bit dari angka

  *tujuan dari operator bitwise
  -mengoptimalkan algoritma
  -melakukan enkripsi
  -melakukan pemrosesan data biner
  -memanipulasi memori dalam bahasa pemrograman tingkat rendah

  *ada 6 operator bitwise
-   1. AND`&`     Menghasilkan bit 1 jika bit pada kedua posisi yang sesuai adalah 1, jika tidak menghasilkan bit 0.
-   2. OR `|`     Menghasilkan bit 1 jika setidaknya satu bit pada posisi yang sesuai adalah 1, jika tidak menghasilkan bit 0.
-   3. XOR `^`    Menghasilkan bit 1 jika hanya satu dari kedua bit pada posisi yang sesuai adalah 1, jika tidak menghasilkan bit 0.
-   4. NOT `~`    Memflip setiap bit, mengubah 0 menjadi 1 dan 1 menjadi 0.
-   5. LEFT SHIFT `>>`    Menggeser bit ke kiri sejumlah langkah yang ditentukan. Setiap geser ke kiri menghasilkan hasil perkalian dengan 2.
-   6. RIGHT SHIFT `<<`   Menggeser bit ke kanan sejumlah langkah yang ditentukan. Setiap geser ke kanan menghasilkan hasil pembagian dengan 2.

*/

#include <iostream>
#include <bitset> // file header yang digunakan untuk menerjemahkan angka jadi biner
using namespace std;
void garis(){
  cout<<"======================"<<endl;
}
int main() {
 int x,y;
 cout<<"decimal x = "; cin>>x;
 cout<<"decimal y = "; cin>>y;
 garis();
 cout<<"binary x = "<< bitset<8>(x)<<endl;
 cout<<"binary y = "<< bitset<8>(y)<<endl;

  garis();
  int AND = x & y;
  int OR = x | y;
  int XOR = x ^ y;
  int NOT = ~x;
  int left = x >> 1;
  int right = y << 1;

  cout<<"bitwise AND = "<<AND<<endl;
  cout<<"bitwise OR = "<<OR<<endl;
  cout<<"bitwise XOR = "<<XOR<<endl;
  cout<<"bitwise NOT = "<<NOT<<endl;
  cout<<"bitwise left = "<<left<<endl;
  cout<<"bitwise right = "<<right<<endl;
}
