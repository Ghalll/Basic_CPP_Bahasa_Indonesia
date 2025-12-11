/* // # pointer 
?     sebuah variabel dalam pemrograman yang berisi alamat memori dari variabel lain.
?     pointer "menunjuk" ke lokasi memori di mana nilai dari variabel lain disimpan.
  
  *kegunaan pointer
  -Pengiriman nilai ke fungsi 
  -Alokasi memori dinamis
  -Memanipulasi dta
  -Operasi bit-level, memanipulasi bit
  -Pengaksesan array

*/

#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr;  // Deklarasi pointer
    ptr = &num;  // Menugaskan alamat dari num ke ptr
    
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;  // Menampilkan alamat memori
    cout << "Value pointed by ptr: " << *ptr << endl;  // Menampilkan nilai yang ditunjuk oleh pointer
    
    return 0;
}

/*
  Tanda bintang (asterisk) * juga digunakan untuk mengakses nilai yang
  disimpan di alamat memori. Ini disebut operator dereferensi.

!  Operator (AND) & digunakan untuk mengakses lokasi memori dari suatu variabel.
*/
