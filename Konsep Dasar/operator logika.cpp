/*
    # logical operators 
    -> digunakan untuk melakukan operasi pada nilai boolean
    ada tiga operator logika 
    - AND pakai `&&`
    - OR  pakai `||`  
    - NOT pakai `!`
*/
#include <iostream>
using namespace std;
int main(){
    /*
    * logika AND, digunakan untuk
    - Digunakan untuk menguji apakah kedua ekspresi bernilai true.
    - Menghasilkan true jika kedua ekspresi bernilai true, jika salah satu atau kedua ekspresi bernilai false, menghasilkan false.
    */
    (true && true) // true
    (true && false) // false
    bool a = true;
    bool b = false;
    bool result = a && b;  // result = false
    
    /*
    * logika OR, digunakan untuk
    - Digunakan untuk menguji apakah salah satu dari dua ekspresi bernilai true.
    - Menghasilkan true jika salah satu atau kedua ekspresi bernilai true, jika kedua ekspresi bernilai false, menghasilkan false.
    */
    (true || false) // true
    (false || false) // false
    bool a = true;
    bool b = false;
    bool result = a || b;  // result = true

    /*
    * logika NOT, digunakan untuk
    - Digunakan untuk membalikkan nilai boolean.
    - Menghasilkan true jika nilai awalnya false, dan sebaliknya.
    */
    !true // false
    !false // true
    bool a = true;
    bool result = !a;  // result = false
}