/*
    # Relational Operators / operator perbandingan
    Operator perbandingan pada C++ digunakan untuk membandingkan dua nilai atau ekspresi dan
    menghasilkan nilai boolean (true atau false) berdasarkan hasil perbandingan tersebut. 

    * ada 6 buah operator perbandingan
-    `==` (sama dengan)            `<` (lebih kecil dari)
-    `!=` (tidak sama dengan)      `>=` (lebih besar dari atau sama dengan)
-    `>` (lebih besar dari)        `<=` (lebih kecil dari atau sama dengan)
    
*/

#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;

    // * operator logika `==` sama dengan : Mengembalikan nilai true jika kedua nilai operan sama.
    bool hasil1 = a == b; // false 0

    // * operator logika `!=` tidak sama dengan : Mengembalikan nilai true jika nilai operan tidak sama.
    bool hasil2 = a != b; // true 1

    // * operator logika `>` lebih besar dari : Mengembalikan nilai true jika operan pertama lebih besar dari operan kedua dan sebaliknya.
    bool hasil3 = a > b; // true 1

    // * operator logika `<` lebih kecil dari : Mengembalikan nilai true jika operan pertama kecil dari operan kedua dan sebaliknya.
    bool hasil4 = a < b; // false 0

    // * operator logika `>=` lebih besar dari atau sama dengan : Mengembalikan nilai true jika operan pertama lebih besar atau sama dengan operan kedua.
    bool hasil5 = a >= b; // true 1

    // * operator logika `<=` lebih kecil dari atau sama dengan : Mengembalikan nilai true jika operan pertama kecil dari atau sama dengan operan kedua.
    bool hasil6 = a <= b; // false 0
}