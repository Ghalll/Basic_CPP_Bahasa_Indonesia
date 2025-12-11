/*
# Program Structure / Structuring Codebase
-> adalah cara untuk menggabungkan beberapa tipe data yang berbeda menjadi satu entitas yang lebih kompleks.

    dengan menstrukturkan kode program, maka kode lebih mudah untuk dipahami, dimodifikasi.
    juga membuat proses debugging pada c++ jadi lebih cepat. 

struktur program c++ secara umum, terdiri dari:
- pada baris pertama kode ditambah file header. header adalah file yang berisi fungsi dan perintah
    file header <iostream>, berisi command 'cout','cin','endl' dsb. untuk menambahkan file header pakai command #include.
    untuk file header sendiri memiliki banyak macam seperti, <stdio>,<iomanip>,<string>,<array>,<conio>,<stlib> dan banyk lgi
    dan semuanya digunakan dengan menyesuaikan fungisnya.
- pada statement selanjutnya adalah `using namespace std;`
    adalah fitur penamaan yang biasa ada dalam bahasa pemrograman yang menerapkan konsep OOP (object oriented programming).
    Tujuannya supaya berbagai perintah tidak saling bentrok dan membuat kode jadi lebih modular.
- selanjutnya adalah function sebagai titik awal msuk program, function tersebut adalah `int main()`
    Isi dari function ini diawali dan diakhiri dengan tanda kurung kurawal ” { ” dan ” } “.
    Di dalam tanda kurung inilah “isi” dari kode program penyusun function main() ditulis.
- terakhir adalah perintah `return 0;`
    fungsinya adalah untuk menutup function main() yang sekaligus mengakhiri kode program bahasa C++.
    Return 0 artinya kembalikan nilai 0 (nol) ke sistem operasi yang menjalankan kode program ini. 
    Nilai 0 menandakan kode program berjalan normal dan tidak ada masalah (EXIT_SUCCESS).
    perintah ini wajib ditulis agar struktur kode c++ mengikuti yang ideal.
*/

#include <iostream>
using namespace std;

int main(){
    // isi program dari fungsi main 

    cout << "This is the first line" << endl;
    cout << "This is the second line";

    return 0;
}