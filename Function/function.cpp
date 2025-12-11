/* // # function atau fungsi
?   sekelompok kode yang melakukan tugas tertentu dan diatur sebagai unit terpisah pada program
    
    *mendefinisikan function
    return_type nama_function (parameter) {
      // isi function
    }

    *return type function atau tipe apakah function mengembalikan sebuah nilai atau tidak, contoh:
      -void = type ini tidak mengembalikan nilai apapun
      -int = type yang mengembalikan nilai 
      -dll
*/

#include <iostream>
#include <string>
using namespace std;

// membuat function tambah yang mengembalikan nilai
int add(int a, int b) {
  int sum = a + b;
  return sum;
}

// membuat function yang tidak mengembalikan nilai
void hello(string name){
  cout<<"hello "<<name;
}

int main() {
  cout<<add(5,10)<<endl; //memanggil function tambah
  hello("alputin");

  return 0;
}