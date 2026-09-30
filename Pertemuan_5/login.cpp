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

int main() {
string namaBarang;
int hargaBarang, jumlahBarang, totalHarga, uangBayar, kembalian;

    bool loginBerhasil = false;
    string username ="Nox", password = "HaruYama";
    int percobaan = 0;
    int maxPercobaan = 3;
    string inputUser, inputPass;
    bool selesai = false;
    int pilihan = 0;
    
    cout << "==================LOGIN======================"  << endl;
    while (percobaan < maxPercobaan && !loginBerhasil) {
        cout << "Masukkan username: ";
        cin >> inputUser;
        cout <<  "Masukkan Password: ";
        cin >> inputPass;

        if (inputUser == username && inputPass == password) {
            loginBerhasil = true;
        } else {
            percobaan++;
            cout << "Username atau Password salah. Percobaan ke-" << percobaan << endl;
        }

        
    }

    
// Menu Kasir
// Diskon

// Menggunakan While untuk menampilkan menu kasir jika login berhasil
do {
    if(loginBerhasil) {
        cout << "==================MENU KASIR======================" << endl;
        cout << "1. Transaksi Baru \n";
        cout << "2. Keluar\n";
        cout << "=======================================================\n";

        cout << "Masukkan Pilihan : ";
        cin >> pilihan;
        switch (pilihan)
        {
            case 1:
                cout << "Transaksi Baru dimulai..." << endl;
                cout << "Masukkan Nama Barang: ";
                // Buat agar bisa input nama barang dengan spasi
                cin.ignore(); // Membersihkan buffer input
                getline(cin, namaBarang);
                cout << "Masukkan Harga Barang: ";
                cin >> hargaBarang;
                cout << "Masukkan Jumlah Barang: ";
                cin >> jumlahBarang;
                totalHarga = hargaBarang * jumlahBarang;
                // diskon
                if(totalHarga >=200000){
                    cout << "Selamat Anda Mendapatkan Diskon 10%!!" << endl;
                    totalHarga = totalHarga * 90 / 100;
                }else if(totalHarga >=100000){
                    cout << "Selamat Anda Mendapatkan Diskon 5%!!" << endl;
                    totalHarga = totalHarga * 95 / 100;
                }

                cout << "Total Harga Setelah Diskon: " << totalHarga << endl;
                do {
                    cout << "Masukkan Uang Bayar: ";
                    cin >> uangBayar;
                    if (uangBayar < totalHarga) {
                        cout << "Uang tidak mencukupi! Masukkan uang kembali." << endl;
                    }
                } while (uangBayar < totalHarga);

                kembalian = uangBayar - totalHarga;
                cout << "Kembalian: " << kembalian << endl;
                break;
            case 2: 
                cout << "Keluar dari aplikasi..." << endl;
                selesai = true;
                break;
        default:
            break;
        }
    }else{
        cout << " Akses DITOLAK!! Anda sudah melakukan percobaan login sebanyak " << percobaan << " kali" << endl;
    }


    
    


} while (loginBerhasil && percobaan < maxPercobaan && !selesai);
    return 0;
}
