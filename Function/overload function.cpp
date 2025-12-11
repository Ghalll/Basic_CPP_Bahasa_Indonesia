/* // # overload function / fungsi yang overload
?   adalah ketika membuat fungsi dengan nama yang sama sehingga tidak menghasilkan eror
?   hal ini juga membuat code fleksibel dan mudah digunakan 

    ! ada pengecualian dalam menerapkan overload function 
    -tipe kembalian fungsi harus berbeda agar compiler tidak menganggap ambigu dan menghasilkan kesalahan.
    -jumlah dan/atau tipe parameter harus berbeda untuk setiap versi fungsi.
  
*/
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(5, 7) << endl;       // Memanggil fungsi int add
    cout << add(3.5, 2.7) << endl;   // Memanggil fungsi double add
    return 0;
}
