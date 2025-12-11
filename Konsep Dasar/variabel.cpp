/*
    # Variabel
    ->  adalah suatu lokasi memori yang digunakan untuk menyimpan dan memanipulasi data atau nilai.
 Setiap variabel memiliki tipe data tertentu yang menentukan jenis nilai yang dapat disimpan di dalamnya.
 banyak cara untuk mendeklarasikan sebuah varibel.
    
    ! lihat pada materi data type.cpp
*/

#include <iostream>
using namespace std;
int main(){
    
    // * cara umumnya deklarasi sebuah variabel dan langsung menginisialisasinya dalam satu baris statement
    int x = 10;
    string name = "johan pearl";

    // * atau dalam satu baris statement dapat mendeklarasikan 1,2 lebih varibael dan menginisialisasinya
    // * yang dipisah oleh tanda koma. dengan cacatan harus tipe data yang sama
    int z=20, c=30, f=22;           // benar
    int a=5, id="A", name="johan";  // salah

    // * mendeklarasikan banyak variabel dalam satu baris statement 
    int x, y, z, a, b, c;
    float ab, ac, ad;
    char id, kode;
    string name, telp, gender, live;

    // * nilai awal variabel dapat diubah
    string message = "welcome";
    message = "hallo";
    int op = 100;
    op = 200;

    // * menggunakan keyword `auto` untuk deklarasi variabel. tapi harus langsung menginisialisasi nilai awalnya
    auto x = 4;
    auto y = 3.37; 
    auto z = "hello"; 
    // contoh salahnya 
    auto num;
    num=10;

    // * dalam deklarasi varibel tidak bisa melakukan spasi pada nama variabel, alternatifnya pakai underscore `_`
    string nama_depan = "johon";    // benar
    string nama depan = "johon";    // salah

}

/*
    ! penting untuk diinggat :
!   C++ sangat sensitiv terhadap huruf besar-kecil
!   misalnya : nama myvariable tidak sama dengan MYVARIABLE dan tidak sama dengan MyVariable.
!   Ini adalah tiga variabel yang berbeda.    
*/