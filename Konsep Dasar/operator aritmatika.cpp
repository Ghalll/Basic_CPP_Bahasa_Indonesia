/*
    # operator aritmatika / Arithmetic Operations
    merupakan basic operator pada c++ yang merujuk pada operasi matematika dasar
    yang digunakan untuk mengoperasikan tipe data khusus angka dalam program

    ada 7 buah operator :
    - penambahan dengan `+`     - increment dengan `++`
    - pengurangan dengan `-`    - decrement dengan `--`
    - perkalian dengan `*`
    - pembagian dengan `/`
    - module dengan `%`
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 5;
    
    // * penambahan 
    cout << a + b<<endl;    // output: 15

    // * pengurangan 
    cout << a - b <<endl;   // output: 5

    // * perkalian 
    cout << a * b <<endl;   // output: 50

    // * pembagian 
    cout << a / b <<endl;   // output: 2

    // * module : adalah untuk mencari hasil dari pembagian
    int x = 9;
    int y = 4;
    cout << 9 % 4 <<endl;   // output: 1

    // * increment (Peningkatan Nilai) : meningkat 1 nilai 
    a++;
    cout << a << endl;    // output : 11

    // * Decrement (Pengurangan Nilai) : mengurangi 1 nilai
    b--;
    cout << b <<endl;     // output : 4

    return 0;
}