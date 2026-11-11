#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <deque>
#include <map>
#include <set>

using namespace std;

//hari ini kita akan belajar Fungsi
// tipe fungsi harus dicantumkan dan harus sama nilai dan tipenya yang dikembalikan

//fungsi void tidak mengembalikan nilai
//nilai fungsi akhir dikembalikan dengan return 

//Prosedur atau void function adalah fungsi yang tidak mengembalikan nilai, hanya menjalankan perintah di dalamnya

//Fungsi dengan Parameter adalah fungsi yang memiliki inputan untuk diproses di dalamnya, biasanya inputan ini disebut dengan parameter. Parameter dapat berupa tipe data apapun, termasuk tipe data buatan sendiri (user-defined type).
// biasanya variable parameter ini di define di fungsi utama main() dan dioper ke fungsi yang akan dipanggil.

int a, b; //contoh variabel global
// contoh Fungsi void dengan parameter
void penjumlahan(int a, int b) {
    cout << "Hasil Penjumlahan: " << a + b << endl;
}
//contoh fungsi void tanpa parameter
void tampilkan() {
    cout << "Ini adalah contoh fungsi void tanpa parameter" << endl;
}

int tambah(int a, int b) {
    return a + b;
}


int main() {
    penjumlahan(5, 3);
    tampilkan();
    int hasil = tambah(10, 20);
    cout << "Hasil Penjumlahan dari fungsi tambah: " << hasil << endl;


    
    return 0;
}