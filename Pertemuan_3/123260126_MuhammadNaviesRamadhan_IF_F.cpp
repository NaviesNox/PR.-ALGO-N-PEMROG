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
#include <tuple>

 using namespace std;

int main() {
    system("cls");
    int umur;
    cout << "=========== Check Umur untuk membuat SIM =========" << endl;
    cout << "Masukkan umur : ";
    cin >> umur;
    cout << "=========== ======================== =========" << endl;

    
    
    // IF ELSE
    if (umur >= 17){
        cout << "Anda sudah boleh membuat ktp " << endl;
    }else if (umur < 17)
    {
        cout << "Kamu blum cukup umur" << endl;
    }
    
    // Ternary Operations
    cout << "==================TERNARY AREA=====================" << endl;
    string status = (umur >=17) ? "Anda sudah boleh buat ktp" : "Anda blum cukup umur" ;
    cout << "Status : " << status;
    
    

    cout << "INI SWITCH CASE AREA ";
    int pilihan, jumlah;
    int harga = 0;
    string namaMenu;
    double subtotal, diskon = 0, total;

    cout << "========== MENU ==========" << endl;
    cout << "1. Nasi Goreng Rp20.000" << endl;
    cout << "2. Ayam Bakar  Rp25.000" << endl;
    cout << "3. Mie Ayam    Rp15.000" << endl;
    cout << "4. Es Teh      Rp5.000" << endl;
    cout << "5. Es Jeruk    Rp7.000" << endl;
    cout << "==========================" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            namaMenu = "Nasi Goreng";
            harga = 20000;
            break;
        case 2:
            namaMenu = "Ayam Bakar";
            harga = 25000;
            break;
        case 3:
            namaMenu = "Mie Ayam";
            harga = 15000;
            break;
        case 4:
            namaMenu = "Es Teh";
            harga = 5000;
            break;
        case 5:
            namaMenu = "Es Jeruk";
            harga = 7000;
            break;
        default:
            cout << "Pilihan menu tidak tersedia." << endl;
            return 1;
    }

    cout << "Jumlah pembelian: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah pembelian harus lebih dari 0." << endl;
        return 1;
    }

    subtotal = harga * jumlah;
    if (subtotal >= 100000) {
        diskon = subtotal * 0.10;
    }
    total = subtotal - diskon;

    cout << fixed << setprecision(0);
    cout << "\n========== STRUK ==========" << endl;
    cout << "Menu       : " << namaMenu << endl;
    cout << "Harga      : Rp" << harga << endl;
    cout << "Jumlah     : " << jumlah << endl;
    cout << "Subtotal   : Rp" << subtotal << endl;
    cout << "Diskon     : Rp" << diskon << endl;
    cout << "Total bayar: Rp" << total << endl;
    cout << "===========================" << endl;

//  jika ada case yang mengeluarkan value yang sama, maka bisa menggunakan "case 1 ... n"


    return 0;
}