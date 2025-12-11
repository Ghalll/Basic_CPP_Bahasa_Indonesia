/*
// # Data type atau tipe data
    Tipe data dalam C++ digunakan untuk menyimpan nilai dalam variabel, melakukan operasi matematika,
    pengambilan keputusan, dan pengolahan data lainnya. 

    * tipe-tipe data pada c++
    - Tipe Data Integer             - Tipe Data String
    - Tipe Data Floating-Point      - Tipe Data Array 
    - Tipe Data Karakter            - Tipe Data Pointer
    - Tipe Data Boolean             - Tipe Data Struktur dan Kelas
    
*/

/**
 * * tipe data integer ada 3 jenisnya
 *  1. int      = Digunakan untuk menyimpan bilangan bulat.
 *  2. short    = Digunakan untuk menyimpan bilangan bulat dengan rentang yang lebih kecil dibandingkan int.
 *  3. long     = Digunakan untuk menyimpan bilangan bulat dengan rentang yang lebih besar dibandingkan int.
 * 
*/
// * contoh int,short,long
int age = 25;
short count = 100;
long population = 1000000;


/**
 * * tipe data float-point ada 3 jenisnya 
 * -> tipe data float biasanya juga untuk menyimpan bilangan yang berkoma.
 * 1. float         = Digunakan untuk menyimpan bilangan desimal (floating-point) dengan presisi tunggal.
 * 2. double        = Digunakan untuk menyimpan bilangan desimal dengan presisi ganda.
 * 3. long double   = Digunakan untuk menyimpan bilangan desimal dengan presisi yang lebih besar dibandingkan double. 
*/
// * contoh
float weight = 65.5;
double height = 1.75;
long double pi = 3.141592653589793238;


/**
 * * tipe data karekter ada ada 2 jenis
 * -> tipe data ini biasanya untuk menyimpan teks satu huruf
 * 1. char      = Digunakan untuk menyimpan karakter tunggal.
 * 2. wchar_t   = Digunakan untuk menyimpan karakter tunggal yang lebih luas dalam ruang Unicode.
*/
// * contoh
char grade = 'A';
wchar_t symbol = L'Ω';


/**
 * * tipe data boolean 
 * -> Digunakan untuk menyimpan nilai kebenaran (true/false).
*/
// * contoh
bool isRaining = true;


/**
 * * tipe data string 
 * -> Digunakan untuk menyimpan urutan karakter.
*/
// * contoh 
string name = "John Doe";


/**
 * * tipe data array 
 * -> Digunakan untuk menyimpan kumpulan elemen dengan tipe data yang sama.
*/
// * Contoh
int numbers[] = {1, 2, 3, 4, 5};


/**
 * * tipe data pointer 
 * ->  Digunakan untuk menyimpan alamat memori suatu variabel.
*/
// * contoh
int* ptr = nullptr;