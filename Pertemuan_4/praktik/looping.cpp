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
#include <conio.h>

using namespace std;

int main() {
    // int titik_awal = 0;
    // int hitung;
    // cout << "Mau Ngulan Berapa : ";
    // cin >> hitung;

    //  while (hitung > 0)
    //  {
    //     cout << "Jumlahnya : " << hitung << endl;
    //     if (hitung == 8)
    //     {
    //         cout << "HBD" ;
    //     }
    //     hitung--;
        
        
    //  }


    // int pilihan;
    // do
    // {
        
    //     cout<< "selamat DATANG di menu" << endl;
    //     cout << "1. Tampilkan HBD \n";
    //     cout << "2. keluar \n";
    //     cin >> pilihan;
    //     system("cls");
    //     switch (pilihan)
    //     {
    //     case 1:
    //         cout << "HBD ...s \n" ;
    //         break;
    //     case 2:
    //         cout << "Selamat tinggal \n" ;
    //      break;
         
    //     default:
    //         cout << "Pilihan anda tidak ada di menu...\n";
    //         break;
    //     }
    // } while (pilihan != 2);
    

cout << "================== CETAK GANJIL GENAP================\n";

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Ini genap : " << i <<endl;
        }else {
            std::cout << "gnjl" << i << std::endl;
        }
        
    }
    return 0;
}