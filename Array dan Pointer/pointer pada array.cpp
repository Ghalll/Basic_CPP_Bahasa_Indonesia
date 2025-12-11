/* // # cara mengakses langsung elemen array pakai pointer

!      arr[0] sama dengan *p dan seterusnya
    
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8};

    int *p = arr;

    cout << *p << endl;     // index 0 = 2
    cout << *(p+1) << endl; // index 1 = 4
    cout << *(p+2) << endl; // index 3 = 6
    cout << &arr[3] <<endl; // menampilkan alamat memori element
}


