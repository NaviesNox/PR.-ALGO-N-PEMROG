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
    // NESTED IF 
    system("cls");
    // int angka = 3;

    // if(angka <4){
    //     if (angka >2){
    //         cout << "Angka lebih besar dari 2 dan lebih kecil dari 4";
    //     }
    // }
    // cout << "\nKode telah dijalankan";

    int x,y,z;

    cout << "input sebuah bilangan 1 : ";
    cin >> x;
    cout << "input sebuah bilangan 2 : ";
    cin >> y;
    cout << "input sebuah bilangan 3 : ";
    cin >> z;

    if (x > y )
    {
        if (x > z)
        {
            cout << "Bilangan tbsr adalah bilangan " << x << endl;
        }else{
            cout << "Bilangan tbsr adalah bilangan " << z << endl;
        }
    }else{
        if(y > z){
            cout << "Bilangan tbsr adalah bilangan " << y << endl;
        }else{
            cout << "Bilangan tbsr adalah bilangan " << z << endl;
        }
    }

    int kodeKendaraan;
    int lamaParkir;
    double biaya;


    cout<< "Pilih Jenis kendaraan anda menggunakan angka" <<endl;

    cout<< "1. Motor" <<endl;
    cout<< "2. Mobil" <<endl;

    cout << "Jenis Kendaraan :";
    cin >> kodeKendaraan;

    if (kodeKendaraan == 1)
    {
        cout << "Jenis Kendaraan : Motor";
        biaya = 2000;
        if (lamaParkir > 5)
        {
            biaya += 3000;
            std::cout << "Biaya parkir anda adalah :" <<  biaya <<std::endl;
        }
        else
        {
           std::cout << "Biaya parkir anda adalah :" <<  biaya <<std::endl;
        }
        
    }
    else
    {
        cout << "Jenis Kendaraan : Mobil";
        biaya = 5000;

         if (lamaParkir > 5)
        {
            biaya += 3000;
            std::cout << "Biaya parkir anda adalah :" <<  biaya <<std::endl;
        }
        else
        {
          std::cout << "Biaya parkir anda adalah :" <<  biaya <<std::endl;

        }
    }
    

    return 0;
}