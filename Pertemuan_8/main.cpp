#include <iostream> 

using namespace std;

void ubah(int* x) {
    *x = 20;
    cout << "Nilai di dalam fungsi ubah: " << *x << endl;
}


//Rekursif adalah suatu fungsi yang memanggil dirinya sendiri. Fungsi rekursif biasanya digunakan untuk menyelesaikan masalah yang dapat dipecah menjadi sub-masalah yang lebih kecil. Fungsi rekursif harus memiliki kondisi dasar (base case) untuk menghentikan pemanggilan dirinya sendiri, agar tidak terjadi infinite loop.
int faktorial(int n) {
    if (n <= 1) {
        return 1; // kondisi dasar
    } else {
        return n * faktorial(n - 1); // pemanggilan rekursif
    }
}

int main () {
    int a = 10;
    cout << "Nilai sebelum fungsi ubah: " << a << endl;
    ubah(&a);

    cout << "masukkan nilai n : ";
    int n;
    cin >> n;
    int hasil = faktorial(n);
    cout << "Hasil faktorial dari " << n << " adalah: " << hasil << endl;

    return 0;
}