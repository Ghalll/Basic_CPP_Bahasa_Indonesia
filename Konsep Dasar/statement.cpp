/*
// # Statement (pernyataan)
    -> adalah unit kode yang digunakan untuk melakukan tindakan atau menginstruksikan program.

     setiap statement pada c++ harus diakhiri dengan tanda semicolom ;
     contoh : 
     1. int x = 10; 
     2. cout <<"game over";
     3. cin >> x;
*/

#include <iostream>
using namespace std;

// * contoh statement deklarasi variabel data
int x;
float y = 3.14;

// * contoh statement output dan input 
int main() {
    int x;
    cout << 100 <<endl;
    cout << "Masukkan sebuah angka: ";
    cin >> x;
    cout << "Angka yang dimasukkan: " << x <<endl;
    return 0;
}


/**
 *  khusus pada statement output (cout,print), teks dalamnya wajib di apit dengan 
 *  tanda kutip ganda ("")
 * 
 *  namun c++ membedakan antara angka dengan text.
 *  pada angka tidak perlu diberikan tanda kutip ganda 
 *  contoh : cout<<42;
*/

void angka() {
    cout << 100;      //karena ini number maka pada statement output tidak perlu diapit dengan tada kutip ganda
}


/** 
 *  bahasa program c++ sangat sensitif terkait huruf besar dan huruf kecil.
 *  
*/

// * contoh 
void huruf() {
    Cout << "ini salah " <<endl;
    cout << "ini benar ";
}
