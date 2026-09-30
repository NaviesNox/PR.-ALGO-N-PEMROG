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
    long long harga, subTotal, total, diskon;
    int pilihan, jumlah;
    string nama;

    cout << "===========MENU Yang tersedia===========" << endl;
    cout << "1. Nasi Goreng     Rp 15.000" << endl;
    cout << "2. Mie ayam        Rp 12.000" << endl;
    cout << "3. Ayam Geprek     Rp 18.000" << endl;
    cout << "=============================" << endl;


    cout << "Masukkan nama anda : " ; 
    getline(cin, nama);
    cout << "Pilih Menu yang tersedia : " ; cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << "Masukkan Jumlah pembelian :";  cin >> jumlah;
        subTotal = 15000 ;

        break;
    case 2:
        cout << "Masukkan Jumlah pembelian :";  cin >> jumlah;
        subTotal = 12000 ;

        break;
    case 3:
        cout << "Masukkan Jumlah pembelian";  cin >> jumlah;
        subTotal = 18000 ;
        break;
    default:
        cout << "Menu tidak ada";
        break;
    }


    if (jumlah > 3)
    {
    
       total = jumlah * subTotal * 0.95;
    }else{
        total = jumlah * subTotal;
    }
    
    cout << "==============Struk =============" << endl;
    cout << "Nama Pembeli : " << nama << endl;
    cout << "Total Harga  : Rp "  << total << endl;
    return 0;
}