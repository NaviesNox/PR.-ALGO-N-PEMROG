#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <deque>
#include <map>
#include <set>

using namespace std;

int main() {
    system("cls");
    // Statemnet Pengendalian IF 
//     int angka;
//    cout << "masukkan angka: ";
//     cin >> angka;

//     if (angka > 4 || angka < 6)
//     {
//         std::cout << "angka " << angka << " yang dipilih lebih besar dari angka 4" << std::endl;

//     }else{
//     std::cout << "angka " << angka << "  kurang dari 10" << std::endl;
//     }
//     int umur;
//     cout << "Masukkan Umur : ";
//     cin >> umur;

//     if (umur >= 17)
//     {
//         cout << "Kamu sudah cukup umur" << endl;
//     } else{
//         cout << "Kamu belum cukup umur" << endl;
//     }
    
//     int nilai;
//     cout << "Masukkan nilai : ";
//     cin >> nilai;

//     if (nilai >= 75)
//     {
//         cout << "Kamu lulus" << endl;
//     } else{
//         cout << "Kamu belum lulus" << endl;
//     }

//     int Angka2;
//     cout << "Masukkan angka : ";
//     cin >> Angka2;

//     if (Angka2 % 2 == 0)
//     {
//         cout << "Angka "<< Angka2 <<"adlaah bilangan genap " << endl;
//     } else{
//         cout << "angka  "<< Angka2 <<"bukan bilangan genap" << endl;
//     }
    

//     int Angka3;
//     cout << "Masukkan angka  apapun: ";
//     cin >> Angka3;

//     if (Angka3 > 0 )
//     {
//         cout << "Angka "<< Angka3 <<"adlaah bilangan postif " << endl;
//     } else{
//         cout << "angka  "<< Angka3 <<"bukan bilangan negatif" << endl;
//     }


 std::cout << "==================== TOKO BERKAHHHHHHHHH ================" << std::endl;
    float saldo = 100000;
    float harga_barang;

    cout << "Masukkan harga barang :";
    cin >> harga_barang;

    if (saldo >= harga_barang)
    {
       saldo = saldo - harga_barang;
       cout << "Saldo tersisa Rp." << saldo << endl;
    }else{
        cout << "Pembayaran gagal saldo anda tidak mencukupi" << endl;
    }
    

    cout << "==============================================";

    return 0;
}