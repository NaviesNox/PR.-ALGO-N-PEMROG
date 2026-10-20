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
    double angka1, angka2;
    int pilihan;
    double hasil;

    cout << "Angka 1 : " ; cin >> angka1; 
    cout << "Angka 2 : " ; cin >> angka2;


    cout << "Pilihan operasi 1.+ , 2.- , 3.* , 4./  :";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        hasil = angka1 + angka2;
        cout << hasil;
        break;
    case 2:
        hasil = angka1 - angka2;
        cout << hasil;
        
        break;
    case 3:
        hasil = angka1 * angka2;
        cout << hasil;

        break;
    case 4:
        if (angka1 == 0 || angka2 == 0)
        {
            cout << "Tidak dapat dihitung";
        }else{
            hasil = angka1 / angka2;
        cout << hasil;

        }
        
        break;
    default:
        cout << "Pilihan tidak ada";
        break;
    }


    return 0;
}